#include<iostream>
using namespace std;
int climbStairs(int n) {
        //base case
         if(n==1) return 1;
         if(n==2) return 2;
            
            //recursive call
            long long left = climbStairs(n-1);
            long long right = climbStairs(n-2);
            return left + right;
      
        
    }
    int main() {
        cout << climbStairs(8);
    }