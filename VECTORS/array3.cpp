#include<iostream>
#include<vector>
using namespace std;
void change(int arr[3]){
    arr[0]=987897;
    return;
}
int main(){
    int arr[3]={1,2,3};
   // int arr[][3]={{1,2,3},{1,2},{1,2,3}};
//     cout<<arr[0]<<endl;
//     cout<<arr<<endl;
//     cout<<&arr[0][0];
    vector<int>v;
    v.push_back(3);
    cout<<v.capacity()<<endl;
     v.push_back(6);
    cout<<v.capacity()<<endl;
     v.push_back(35);
    cout<<v.capacity()<<endl;
     v.push_back(344);
    cout<<v.capacity()<<endl;
    change(arr);
    cout<<arr[0];
 }