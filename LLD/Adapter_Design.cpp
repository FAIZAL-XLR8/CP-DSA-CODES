#include<bits/stdc++.h>
using namespace std;
class IReport{
    public :
    virtual string getJSONData() = 0;
};
class XML{
    public:
    string generate()
    {
        return "this is xmldata";
    }
};
class XMLAdapter  : public IReport{
    public :
    XML* xml;
    XMLAdapter()
    {
        xml = new XML();
    }
    string getJSONData()override
    {
        string temp = xml -> generate();
        // convert into JSON
        return temp + " -> converted to JSON\n";
    }
};
int main()
{
    IReport* rp = new XMLAdapter();
    cout << rp->getJSONData();
}