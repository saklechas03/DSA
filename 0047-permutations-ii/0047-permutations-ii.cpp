class Solution {
public:

  void permute(vector<int>& nums, vector<vector<int>>& ans,int index){
     vector<bool>visited(21,0);
  if(index==nums.size()){
    ans.push_back(nums);
    return;
  }


for(int i=index;i<nums.size();i++){
    if(visited[nums[i]+10]==0){
          visited[nums[i]+10]=1;
        swap(nums[i],nums[index]);
        permute(nums,ans,index+1);
        swap(nums[i],nums[index]);
      
    }
}


  }







 vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
       
        int index=0;

        permute(nums,ans,index);
        return ans;
        
    }
};