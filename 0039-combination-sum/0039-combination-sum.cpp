class Solution {
public:

   void subsum (vector<int>candidates , int target, int i, int n , vector<int>& temp , vector<vector<int>>& ans){

    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(i==n||target<0){
        return;
    }






      subsum(candidates,target,i+1,n,temp,ans);
      temp.push_back(candidates[i]);
      subsum(candidates,target-candidates[i],i,n,temp,ans);

  temp.pop_back();






   }














    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int i=0;
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;

   subsum(candidates, target, i, n , temp,ans);


return ans;







        
    }
};