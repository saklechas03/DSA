class Solution {
public:
    bool isPalindrome(int x) {
     int rev=0;
     int nums=x;

     if(x==0){
        return 1;
     }
    if(nums%10==0 && nums!=0){
        return 0;
    }
    if(x<0){
        return 0;
    }



     while(nums>0){
        int digit= nums%10;
      
           if (rev > (INT_MAX - digit) / 10) {
                return false;
            }
        rev=rev*10+digit;
         nums=nums/10;
     }

     if(x==rev){
        return 1;
     }

    return 0;





    }
};