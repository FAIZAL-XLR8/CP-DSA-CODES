// User function Template for C++

#include <bits/stdc++.h>
using namespace std;

  class custom{
      public :
      bool operator()(int &x, int &y) {
          return x > y;
      }
  };
    int minimumCostOfBreaking(vector<int> X, vector<int> Y) {
        // Write your code here
        // idea is to use all the expensive cuts initally first since 
        //expensive * less no of  rectangle peices currently = less costly
        // maanle 4 * present rectangle(= 1) toh cost = 4 * 1
        //if peices zyada hote presently to daam kaatne ka aur zyad laggta
        sort(begin(X), end(X), custom());
        sort(begin(Y), end(Y),custom());
        // if we cut vertically no. of pieces for  horizontal cuts will increase and vice versa
        int currHoriz = 0;int currVerti = 0;
        int i  = 0, j = 0;
        int n1 = X.size();
        int n2 = Y.size();
        int total = 0;
        
        while (i < n1 && j < n2)
        {
             if (X[i] > Y[j])
             {
                 total += X[i] * (currHoriz + 1);
                 i++;
                 currVerti++;
             }
             else 
             {
                 total += Y[j] *  (currVerti + 1);
                 j++;
                 currHoriz ++;
             }
         
        }
         while (i < X.size()) {
             total += X[i] * (currHoriz + 1);
                 i++;
                 currVerti++;
        }

        while (j < Y.size()) {
           total += Y[j] *  (currVerti + 1);
                 j++;
                 currHoriz ++;
        }
        return total;
    }
int main () {
    vector <int> hrz = {4, 1, 2};
    vector <int> verti = {2, 1, 3, 1, 4};
   cout <<  minimumCostOfBreaking(hrz, verti);

}