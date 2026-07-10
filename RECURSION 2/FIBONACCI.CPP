#include<iostream>
using namespace std;
int arr[12] = {0};
int fibo ( int n ){
    //base case 
    if(n == 1 || n == 2 )
    return 1;//because fibo series 1 1 2 3 ..
    if (arr[n]!=0) {
        return arr[n];
    }
    arr[n]=fibo(n-1) + fibo(n-2);
    return arr[n];
    
}
int main(){
    for(int i =1; i<=11; ++i)
    cout<< fibo(i)<<" ";

}