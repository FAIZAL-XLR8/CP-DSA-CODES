#include <bits/stdc++.h>
using namespace std;
class Remote{
    private :
    static Remote* instance;
    Remote()
    {}

    public :
    ICommand* cmd;
    static Remote* getInstance()
    {
        return instance;
    }
    
};
Remote* Remote:: instance = new Remote();
class ICommand {
    public :
    virtual void execute() = 0;
    virtual void undo() = 0;
};
int main()
{

}