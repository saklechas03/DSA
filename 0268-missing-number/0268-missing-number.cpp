class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n =nums.size();
        int sum =0;
        int  count=0;
        int sum2=0;
        for(int i =0;i<n;i++){
            sum=sum+nums[i];
            count++;
        }
        for(int i=0;i<=count;i++){
            sum2 =sum2+i;
        }
        return sum2-sum;
        
    }
};