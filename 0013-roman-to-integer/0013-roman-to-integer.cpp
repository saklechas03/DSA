class Solution {
public:
int nums(char c){
        if(c=='I')
            return 1; 
        if(c=='V')
         return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
         if(c=='C')
                return 100;
         if(c=='D')
            return 500;
        else
            return 1000;
            
        
         
    }
    int romanToInt(string s) {
        int sum=0;
        int i=0;
        while(i<s.size()-1){
            if(nums(s[i])<nums(s[i+1])){
                sum=sum-nums(s[i]);
            }
            else{
                sum=sum+nums(s[i]);
            }
            i++;
        }
        sum=sum+nums(s[s.size()-1]);
        return sum;
        
    }
    
};