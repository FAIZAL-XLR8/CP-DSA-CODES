#include <bits/stdc++.h>
using namespace std;
int main () {
 int t; 
 cin >> t;
 int b, c, h;
 int layer =2;
 for (int i =0; i <t; ++i) {
    cin >> b >> c>> h;
  
    b-=2;
    while (b >= 0 && (c >0 )  || (h > 0)){
        if ( c >0 ){
        c--, layer++;
        }
        else if( h > 0)
        {
            h--, layer ++;
        }
        if ( b >0 && (c >0 )  || (h > 0) ){
            if ( c >0 ){
        c--, layer++;
        }
        else if( h > 0)
        {
            h--, layer ++;
        }
        
        }
       

    }
    cout << layer;
   

 }
}