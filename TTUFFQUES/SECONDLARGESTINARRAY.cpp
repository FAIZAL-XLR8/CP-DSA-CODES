// User function template for C++
//https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int getSecondLargest(vector<int> &arr) {
        // Code 
        int secondlargest=-1;
        int largest=arr[0];
        for(int i =1; i<arr.size();++i){
            if(largest<arr[i]){
                secondlargest=largest;
            largest=arr[i];
            }
             
              if(arr[i]<largest && arr[i]>secondlargest)
            secondlargest=arr[i];
            
        }
        return secondlargest;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends