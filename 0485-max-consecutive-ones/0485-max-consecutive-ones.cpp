class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
   
    int new_count=0;
    int ptr=0;
    int count=0;
    while(ptr<nums.size()){
      
        if(nums[ptr]==1){

            count++;
             new_count=max(new_count,count);
            ptr++;
        } 
         else{
                count =0;
                ptr++;
         }


        
    }

return new_count;




        
    }
};