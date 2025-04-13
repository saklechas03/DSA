class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        int n=nums.size();
        int suffix_max=nums[n-1];
        
        
        for(int i=n-2;i>=0;i--){
            maxi=max(maxi,suffix_max-nums[i]);
            suffix_max=max(suffix_max,nums[i]);
          
           
        }
        if(maxi==0){
            return -1;
        }
        return maxi;
        
    }
};