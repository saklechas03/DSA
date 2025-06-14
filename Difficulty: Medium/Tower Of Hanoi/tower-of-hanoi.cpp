class Solution {
  public:
    // You need to complete this function
    
    //void tower(int n , int from , int to , int aux){
        
       
        //if(n==1){
          // cout<<"move disk "<<n<<"from "<<from<<"to "<<to<<endl;
          
           // return;
        //}
       // tower(n-1,from,aux,to);
     //cout<<"move disk "<<n<<"from "<<from<<"to "<<to<<endl;
    
        //tower(n-1,aux,to,from);
        
    //}
    
    
    

    int towerOfHanoi(int n, int from, int to, int aux) {
        // Your code here
       
       // tower(n, from , to , aux);
        return pow(2,n)-1;
        
    }
};