class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>upper_case(26,0);
        vector<int>lower_case(26,0);
        int ans=0;
        bool odd =0;
        int count;
        for(int i =0;i<s.size();i++){
            if(s[i]<'a'){
                upper_case[s[i]-'A']++;
            }
            else{
                lower_case[s[i]-'a']++;
            }
        }
        for(int i=0;i<lower_case.size();i++){
                if(lower_case[i]%2==0){
                    ans=ans+lower_case[i];
                }
                else{
                    ans=ans+(lower_case[i]-1);
                    odd=1;
                }
        }
        for(int i=0;i<upper_case.size();i++){
                if(upper_case[i]%2==0){
                    ans=ans+upper_case[i];
                }
                else{
                    ans=ans+(upper_case[i]-1);
                    odd=1;
                }
        }
       count =ans+odd;
       return count;

    }
};