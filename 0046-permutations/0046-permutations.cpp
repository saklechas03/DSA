class Solution {
public:

     void perm(vector<int>& nums, vector<int>& temp, vector<bool>& visited,vector<vector<int>>& ans){
     
           if(visited.size()==temp.size()){
            ans.push_back(temp);
            return;
           }



          for(int i=0;i<visited.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                temp.push_back(nums[i]);
                perm(nums, temp , visited,ans);
                visited[i]=0;
                temp.pop_back();
            }
          }








     }
















    vector<vector<int>> permute(vector<int>& nums) {
   
     vector<int>temp;
     vector<bool>visited(nums.size(),0);
     vector<vector<int>>ans;
    perm(nums,temp, visited ,ans);
   return ans;

        
    }
};