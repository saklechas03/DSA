class Solution {
public:
void para(int left,int right, int n , string &temp , vector<string>& ans){
    if(left+right==2*n){
        ans.push_back(temp);
        return;
    }
    if(left<n){
        temp.push_back('(');
        para(left+1,right,n,temp,ans);
           temp.pop_back();
    }
    if(right<left){
         temp.push_back(')');
        para(left,right+1,n,temp,ans);
           temp.pop_back();
    }
 
}








    vector<string> generateParenthesis(int n) {
        string temp;
        vector<string>ans;
        int left=0;
        int right=0;
       para(left,right,n,temp,ans);
       return ans;




        
    }
};