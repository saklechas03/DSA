class Solution {
public:
    string sortVowels(string s) {
        string ans;
        vector<int>upper_case(26,0);
        vector<int>lower_case(26,0);
        for( int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'){
                lower_case[s[i]-'a']++;
                s[i]='#';
            }
            if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'||s[i]=='U'){
                upper_case[s[i]-'A']++;
                 s[i]='#';
            }

        }
        for(int i=0;i<upper_case.size();i++){
            char c='A'+i;
            while(upper_case[i]){
                ans.push_back(c);
                upper_case[i]--;
            }
        }
        for(int i=0;i<lower_case.size();i++){
            char c='a'+i;
            while(lower_case[i]){
                ans.push_back(c);
                lower_case[i]--;
            }
        }
        int first=0;
        int second=0;
      
            while(second<ans.size()){
            if(s[first]=='#'){
                s[first]=ans[second];
                second++;
            }
            first++;

        }
      
        return s;

        
    }
};