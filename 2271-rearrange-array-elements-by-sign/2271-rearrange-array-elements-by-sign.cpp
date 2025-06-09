class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

     vector<int>result(nums.size());
     int evenindex=0;
     int oddindex=1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            result[evenindex]=nums[i];
            evenindex=evenindex+2;
        }
        else{
            result[oddindex]=nums[i];
            oddindex=oddindex+2;
        }
     }

     return result;


        
    }
};