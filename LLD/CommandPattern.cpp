#include <bits/stdc++.h>
using namespace std;
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
    void setCommand(Icommand* cmd, int idx)
    {
        try{
        if (idx < list.size() and idx > 0 and list[idx] != nullptr)
        {
            list[idx] = cmd;
        }
        else{
            throw  logical_error("Wrong input of command!")
            }
         }
         catch(const logical_error &e)
         {
            cout << e.what() << endl;
         }
        
    }
    void pressButton(int idx)
    {
            if (isPressed[idx] == true)
            {
                list[idx] -> execute();
            }
    }
    
};
Remote* Remote:: instance = new Remote();
class ICommand {
    public :
    virtual void execute() = 0;
    virtual void undo() = 0;
};
class Fan{
    public :
    void on() cout << "Fan is switched on\n";
    void off() cout << "Fan is switched off\n";
};
class AC {
    void on() cout << "AC is on\n";
    void off() cout << "AC is off\n";
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
    void undo()
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
    void execute()
    {
        ac -> on();
    }
    void off()
    {
        ac -> off();
    }
};
int main()
{

}