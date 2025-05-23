
// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        // Your code goes here
        int pre=0;
        int suff=1;
        vector<int>lps(s.size(),0);
        while(suff<s.size()){
            if(s[pre]==s[suff]){
                lps[suff]=pre+1;
                suff++;
                pre++;
            }
            else{
                if(pre==0){
                    lps[suff]=0;
                    suff++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        return lps[s.size()-1];
        
    }
};