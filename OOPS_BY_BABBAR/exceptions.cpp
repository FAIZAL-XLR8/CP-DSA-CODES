//excptions are runtime error thrown by cpp when a program ends  abnormally
// to handle excptions use try catch and throw blocks and if a corresponding catch doesnt exist terminate() func is called which crashes the code
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        try{
            throw "error has occured";
        }
        catch(const char* e)
        {
            cout << "print error"<<endl; 
        }
        //op of above code print error
         try{
            throw logic_error("div by zero");
        }
        catch(const logic_error &e)
        {
            cout << e.what()<<endl; //op of code div by zero
        }
        //as a whole code print error
//div by zero
    }
    int main2()
    {
        try{}
        catch(int &x){}
        catch(const char* err){}
        catch(const runtime_error& err){}
        catch(...){} //this ... handles all the excptions of any type--> to prevent progrm being crashed
    }