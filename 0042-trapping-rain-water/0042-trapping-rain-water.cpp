class Solution {
public:
    int trap(vector<int>& height) {
          int n=height.size();
        int start=0;
        int end=n-1;
        int left_max=0;
        int right_max=0;
      
        int water=0;
        while(start<end){
            left_max=max(left_max,height[start]);
            right_max=max(right_max,height[end]);
            if(left_max<right_max){
                if(left_max>height[start]){
                    water = water+left_max-height[start];
                }
                start++;
              
            }
            else{
                if(right_max>height[end]){
                    water=water+right_max-height[end];
                }
               end--;
            }
        }
        return water;
        
    }
};