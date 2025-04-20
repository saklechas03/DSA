//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    
    void rotateclockwise(string &s){
        char c=s[s.size()-1];
        int i=s.size()-2;
        while(i>=0){
        s[i+1]=s[i];
        i--;
        }
        s[0]=c;
        
    }
     
    void rotateanticlockwise(string  &s){
        char c=s[0];
        int i=1;
        while(i<s.size()){
        s[i-1]=s[i];
        i++;
        }
        s[s.size()-1]=c;
        
    }
    
    
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
        
        if(s1.size()!=s2.size()){
            return 0;
        }
         string clockwise=s1;
         string anticlockwise=s1;
         rotateclockwise(clockwise);
         rotateclockwise(clockwise);
         if(clockwise==s2){
             return 1;
         }
         rotateanticlockwise(anticlockwise);
         rotateanticlockwise(anticlockwise);
         if(anticlockwise==s2){
             return 1;
         }
         return 0;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends