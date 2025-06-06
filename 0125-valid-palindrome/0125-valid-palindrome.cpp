class Solution {
public:


  bool alphanumeric(char c){


 return (c>='A'&& c<='Z' || c>='a' && c<='z' || c>='0' && c<='9');


  }


  char lower(char c){

    if(c>='A' && c<='Z'){
        return('a'+(c-'A'));
    }

    return c;
  }


















  bool checkpalindrome(string &s , int start, int end){

        if(start>=end){
            return 1;
        }
      
       if(!alphanumeric(s[start])){
            return checkpalindrome(s,start+1,end);
       }
      if(!alphanumeric(s[end])){
            return checkpalindrome(s,start,end-1);
       }
 if(lower(s[start])!=lower(s[end])){
        return 0;
       }
       return checkpalindrome(s,start+1,end-1);



  }

























    bool isPalindrome(string s) {
        int n=s.size();
       if(checkpalindrome(s,0,n-1)){
        return 1;
       }
    return 0;
    }
};