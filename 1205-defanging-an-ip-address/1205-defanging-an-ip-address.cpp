class Solution {
public:
    string defangIPaddr(string address) {
        int i=0;
        string ans;
        int n=address.size();
        while(i<n){
            if(address[i]=='.'){
                ans=ans+"[.]";
            
            }
            else{
                ans=ans+address[i];
            };
            i++;
        }
        return ans;
        
    }
};