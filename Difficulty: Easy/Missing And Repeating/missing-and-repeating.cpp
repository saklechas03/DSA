//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            arr[i]--;
            
        }
        for(int i=0;i<n;i++){
            arr[arr[i]%n]+=n;
        
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n==2){
                ans.push_back(i+1);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n==0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends