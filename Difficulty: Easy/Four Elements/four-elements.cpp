//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  

{
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(A[j]<A[j-1]){
                swap(A[j],A[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int start=j+1;
            int end=n-1;
            int ans=X-(A[i]+A[j]);
            while(start<end){
                if(A[start]+A[end]==ans){
                    return 1;
                    break;
                }
                if(A[start]+A[end]>ans){
                    end--;
                }
                else{
                    start++;
                }
            }
        }
    }
    return 0;
}