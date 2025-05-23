class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
      
        int size=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s=s+'$';
        s=s+rev;
        int n=s.size();
         vector<int>lps(s.size(),0);
        int pre=0;
        int suff=1;
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
        return size-lps[n-1];
        
    }
};
