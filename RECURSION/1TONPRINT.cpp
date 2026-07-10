#include<iostream>
using namespace std;
// two parameters call
// void print(int i,int n){
//     if(i>n) return ;
//     cout<<i<<endl;
//     print(i+1,n);
//}


//1 parameter call
void print (int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n; cout<<"enter the number"<<endl;
    cin>>n;
    cout<<endl<<endl;
   // print(1,n);
   print(n);
}