class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp;
        int count=0;
        int index=0;
        int pos=0;
        while(index<s.size()){
            if(s[index]==' '){
                 pos=temp[temp.size()-1] - '0';
                temp.pop_back();
                ans[pos]=temp;
                count++;
                temp.clear();
                index++;
            }
            else{
                temp.push_back(s[index]);
                index++;
            }
        }
         pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                count++;
                temp.clear();
         for(int i=1;i<=count;i++){
            temp=temp+ans[i];
            temp=temp+' ';
         }
         temp.pop_back();
         return temp;
        
        
    }
};