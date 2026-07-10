
      vector<int> calculateSpan(vector<int>& arr) {
          // write code here
          int n = arr.size();
          vector <int> pge (n, -1); // will store the indices of previous greater element
          stack <int> st;
          for (int i = 0; i < n; ++i) {
              while (!st.empty() && arr[i] >= arr[st.top()]) st.pop();
              if(st.empty()) {
                  pge[i] = -1;
              }
              else {
                  pge[i] = st.top();
              }
              st.push(i);
          }
          // now convrting pge into span via taking difference out btn i and pge index
          for (int i = 0; i <n; ++i) 
          {
              pge[i] = i - pge[i];
          }
          return pge;
      }
