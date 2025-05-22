// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans(1,1);
        while(n>1){
            int size=ans.size();
            int carry=0;
            int result=0;
            for(int i=0;i<size;i++){
                result=ans[i]*n+carry;
                carry=result/10;
                ans[i]=result%10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry=carry/10;
            }
            n--;
        }
       reverse(ans.begin(),ans.end());
       return ans;
        
    }
};