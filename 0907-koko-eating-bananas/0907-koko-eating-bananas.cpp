class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         long long start=0;
          int end=0;
         int ans;
         int n=piles.size();
         long long sum=0;
         for(int i=0;i<n;i++){
            sum = sum+piles[i];
        
            if(end<piles[i]){
                end=piles[i];
            }

         }
             start=sum/h;
             if(start==0){
                start=1;
             }
         while(start<=end){
            int time=0;
            int mid=start+(end-start)/2;
            for(int i=0;i<n;i++){
                time=time+(piles[i]/mid);
                if(piles[i]%mid){
                    time=time+1;

                }
            }
            if(time<=h){
                ans =mid;
                end=mid-1;

            }
            else{
                start=mid+1;
            }
         }
         return ans;
        
    }
};