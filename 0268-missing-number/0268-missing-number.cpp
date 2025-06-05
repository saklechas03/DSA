class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n =nums.size();
        int sum =0;
        int  count=0;
        int sum2=(n*(n+1))/2;
        for(int i =0;i<n;i++){
            sum=sum+nums[i];
            count++;
        }
       
        return sum2-sum;
        
    }
};