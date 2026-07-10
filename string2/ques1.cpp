#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int size=str.size();
    int ctr=0;
    for(int i=0;i<size;++i){
      if(size==1)
      break;
     if(i==0)
     {
        if(str[i]!=str[i+1])
     ctr++;
     continue;}

     else if(i==size-1)
     {
        if(str[size-1]!=str[size-2])
        ctr++;

     }
     else if(str[i]!=str[i-1]&&str[i]!=str[i+1])
     ctr++;

    }
    cout<<ctr;

}