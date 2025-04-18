class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                candidate=nums[i];
            }
            else{
                if(nums[i]==candidate){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==candidate){
                count++;
            }
             if(count>n/2){
            return candidate;
        }
        }
       
        return -1;
    
        
    }
};