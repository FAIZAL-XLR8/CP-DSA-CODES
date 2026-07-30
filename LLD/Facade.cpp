#include<bits/stdc++.h>
using namespace std;
class Alpha {
    public :
    void run()
    {
        cout <<"alpha is runnig\n";
    }
};
class Beta {
    Alpha a;
    public :
    void run(){
        a.run();
         cout  << "Beta is running\n";
    }
};
class Gamma {
    Alpha a;
    Beta b;
    public :
    void run(){
        a.run();
        b.run();
         cout <<   "Gamma is running\n";
    }
};
class Facade {
    Alpha a;
    Beta b;
    Gamma g;
    public :
    void execute()
    {
         a.run();
         b.run();
         g.run();
    }

};
class Client {
    private :
    Facade f;
    public :
    void execute()
    {
        f.execute();
    }
};
int main()
{
    Client c;
     c.execute();
}