//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        
        // Your Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int start=i+1;
            int end=n-1;
            int ans=target-arr[i];
            while(start<end){
                if(arr[start]+arr[end]==ans){
                    return 1;
                     break;
                }
                if(arr[start]+arr[end]<ans){
                    start++;
                }
                else{
                    end--;
                }
            }
            
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        bool result = solution.hasTripletSum(arr, target);
        cout << (result ? "true" : "false") << "\n";
    }

    return 0;
}
// } Driver Code Ends