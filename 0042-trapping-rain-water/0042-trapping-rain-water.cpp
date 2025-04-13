class Solution {
public:
    int trap(vector<int>& height) {
        int left_max=0;
        int right_max=0;
        int max_height=0;
        int index=0;
        int water =0;
        int n=height.size();
        for(int i=0;i<n;i++){
            if(height[i]>max_height){
                max_height=height[i];
                index=i;
            }

        }
        for(int i=0;i<index;i++){
        
            if(left_max>height[i]){
                water= water+left_max-height[i];
            }
                left_max=max(left_max,height[i]);
        }
        for(int i=n-1;i>index;i--){
    
            if(right_max>height[i]){
                water= water+right_max-height[i];
            }
                    right_max=max(right_max,height[i]);
        }
        return water;

        
    }
};