#include<bits/stdc++.h>
using namespace std;
class IReport{
    public :
    virtual string getJSONData(string data) = 0;
};
class XML{
    public:
    string generate(string data)
    {
        return "ur data is " + data + " and this is xmldata";
    }
};
class XMLAdapter  : public IReport{
    public :
    XML* xml;
    XMLAdapter(XML* xml)
    {
       this -> xml = xml;
    }
    string getJSONData(string data)override
    {
        string temp = xml -> generate(data);
        // convert into JSON
        return temp + " -> converted to JSON\n";
    }
};
class Client{
    IReport* rp;
    public:
    void setAdapter(IReport* rp)
    {
        this -> rp = rp;
    }
    void process(string data)
    {
        cout << rp -> getJSONData(data);
    }
};
int main()
{
    Client* cl1 = new Client();
    XML* adaptee = new XML();
    IReport* adapter = new XMLAdapter(adaptee);
    cl1 -> setAdapter(adapter);
    cl1 -> process("Faizal");
    delete adaptee;
    delete adapter;
    delete cl1;
}