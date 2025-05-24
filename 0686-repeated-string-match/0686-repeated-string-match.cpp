class Solution {
public:

void computelps(string temp , vector<int>& lps){
    
       int pre =0;
       int suff=1;
       while(suff<temp.size()){
        if(temp[pre]==temp[suff]){
            lps[suff]=pre+1;
            suff++;
            pre++;
        }
        else{
            if(pre==0){
                lps[suff]=0;
                suff++;
            }
            else{
                pre=lps[pre-1];
            }
        }
       }
     
    }



















    bool KMP_Match(string temp,string b){
              vector<int>lps(temp.size(),0);
            computelps(temp,lps);
            int first=0;
            int second =0;
            while(second<temp.size() && first<b.size()){
                if(temp[second]==b[first]){
                    first++;
                    second++;
                }
                else{
                    if(second==0){
                        first++;
                    }
                    else{
                        second=lps[second-1];
                    }
                }



            }
            if(second==temp.size()){
                return 1;
            }
            return 0;
        }







    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }
        string temp=a;
        int rep=1;
        while(temp.size()<b.size()){
            temp=temp+a;
            rep++;
        }
        if(KMP_Match(b,temp)==1){
            return rep;
        }
        if(KMP_Match(b,temp+a)==1){
            return rep+1;
        }
        return -1;
    }
};