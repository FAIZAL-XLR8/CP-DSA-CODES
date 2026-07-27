#include <bits/stdc++.h>
#include<exception>
#include<stdexcept>
using namespace std;
class ICommand {
    public :
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual ~ICommand() {cout << "ICommand Destructor\n"; }
};
class Remote{
    private :
    static Remote* instance;
    vector<ICommand*> list; //this list serves as the list of 
    // commands that the remote has to offer
    vector<bool> isPressed;
    Remote()
    {
        list.resize(4,nullptr);
        isPressed.resize(4, false);
    }

    public :
    static Remote* getInstance()
    {
        return instance;
    }
    void setCommand(ICommand* cmd, int idx)
    {
        try{
        if (idx < list.size() and idx > 0 and list[idx] != nullptr)
        {
            list[idx] = cmd;
        }
        else if (idx < list.size() and idx > 0 and list[idx] == nullptr)
        {
            list[idx] = cmd;
        }
        else{
            throw  logic_error("Wrong input of command!");
            }
         }
         catch(const logic_error &e)
         {
            cout << e.what() << endl;
         }
        
    }
    void pressButton(int idx)
    {
            if (isPressed[idx] == true)
            {
                list[idx] -> undo();
                isPressed[idx] = false;
            }
            else
            {
                list[idx] -> execute();
                isPressed[idx] = true;
            }
    }
    ~Remote(){
        cout << "Remote destructor\n";
    }
};
Remote* Remote:: instance = new Remote();

class Fan{
    public :
    void on() {cout << "Fan is switched on\n";}
    void off() {cout << "Fan is switched off\n";}
};
class AC {
    public:
    void on() {cout << "AC is on\n";}
    void off() {cout << "AC is off\n";}

};
class FanCommand : public ICommand {
    private :
    Fan* fan;
    public :
    FanCommand(Fan* fan)
    {
        this -> fan = fan;
    }
    void execute() override {
        fan -> on();
    }
    void undo() override
    {
        fan->off();
    }
};
class ACCommand : public ICommand {
    public :
    AC* ac;
    ACCommand(AC* ac){
        this -> ac = ac;
    }
    void execute() override
    {
        ac -> on();
    }
    void undo() override
    {
        ac -> off();
    }
};
int main()
{
    Remote* rmt = Remote :: getInstance();
    Fan* badkaRoomFan = new Fan();
    ICommand* cmd1 = new FanCommand(badkaRoomFan);
    AC* ChotkaRoomAC = new AC();
    ICommand* cmd2 = new ACCommand(ChotkaRoomAC);

    rmt -> setCommand(cmd1, 1);
    rmt -> setCommand(cmd2, 2);
    rmt -> pressButton(1);
    rmt -> pressButton(1);
    rmt-> pressButton(2);
    delete cmd1;
    delete cmd2;
    delete rmt;

}