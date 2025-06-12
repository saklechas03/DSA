class Solution {
public:
void mergesort(vector<int>& nums, int start, int end){
    if(start==end){
        return;
    }
    int mid=start+(end-start)/2;
      mergesort(nums,start,mid);
     mergesort(nums,mid+1,end);
      merge(nums,start,mid,end);

}

void merge(vector<int>& nums,int start,int mid,int end){

   vector<int>temp((end-start)+1);
   int index=0;
   int left=start;
   int right=mid+1;
   while(left<=mid && right<=end){

        if(nums[left]<=nums[right]){
            temp[index]=nums[left];
            left++;
            index++;
        }
        else{
            temp[index]=nums[right];
            right++;
            index++;
        }
   }
   while(left<=mid){
    temp[index]=nums[left];
    left++;
    index++;
   }
     while(right<=end){
    temp[index]=nums[right];
    right++;
    index++;
   }
   index=0;
   while(start<=end){
    nums[start]=temp[index];
    start++;
    index++;
   }

   


}


 vector<int> sortArray(vector<int>& nums) {
        int n =nums.size();

    mergesort(nums,0,n-1);

  return nums;




        
    }
};