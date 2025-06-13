class Solution {
public:




void subsethelp(vector<int>& nums, int index , int n , vector<int> temp,vector<vector<int>>& ans){

if(index==n){
    ans.push_back(temp);
    return ;
}
subsethelp(nums,index+1,n,temp,ans);
temp.push_back(nums[index]);
subsethelp(nums,index+1,n,temp,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
   int n =nums.size();
   vector<int>temp;
   vector<vector<int>>ans;
  subsethelp(nums,0,n,temp,ans);
    return ans;
}
};