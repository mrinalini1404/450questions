// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    long long int count( int arr[], int n, int m )
    {
       
        //code here.
        long long int t[n+1][m+1]; 
        for(int i=0;i<=m;i++){
            t[0][i]=0;
        }
        for(int j=0;j<=n;j++){
                t[j][0]=1;
        }
        
        
        for(long long int i=1;i<=n;i++){
            for(long long int j=1;j<=m;j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i][j-arr[i-1]] + t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        return t[n][m];
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[m];
		for(int i=0;i<m;i++)
		    cin>>arr[i];
	    Solution ob;
		cout<<ob.count(arr,m,n)<<endl;
	}
    
    
    return 0;
}  // } Driver Code Ends
