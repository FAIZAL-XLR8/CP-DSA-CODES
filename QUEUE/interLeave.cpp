class Solution {
    public:
      queue<int> rearrangeQueue(queue<int> q) {
          // code here
          //logic in notebook
          int cap = q.size() / 2;
          int n = cap;
          stack <int> st;
          while (n > 0) {
              st.push(q.front());
              q.pop();
              n -- ;
          }
   n = cap;
           while (n > 0) {
                  q.push(st.top());
              st.pop();
              n -- ;
           }
           // deque and enque
           n = cap;
           while (n > 0) {
               q.push(q.front());
               q.pop();
               n--;
           }
           n = cap;
             while (n > 0) {
              st.push(q.front());
              q.pop();
              n -- ;
          }
           
           // interleave
           n = cap;
           while (n > 0) {
               q.push(st.top());
               st.pop();
               q.push(q.front());
               q.pop();
              n--;
              }
           return q;
          
      }
  };