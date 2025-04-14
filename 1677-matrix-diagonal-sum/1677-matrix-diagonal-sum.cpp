class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int primary=0;
        int secondary =0;
        int rows = mat.size();            
        int cols = mat[0].size();
        for(int i=0;i<rows;i++){
            secondary=secondary+mat[i][i];
        }
        int i=0;
        int j=cols-1;
        while(j>=0){
            if(i==j){
                mat[i][j]=0;
            }
            primary=primary+mat[i][j];
            i++;
            j--;
        }
        sum=primary+secondary;
        return sum;

        
    }
};