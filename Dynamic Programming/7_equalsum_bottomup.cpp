// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        // code here
        int suma=0;
        int sum=0;
        for(int i=0;i<n;i++){
            
            suma+=arr[i];
            
        }
        
        if(suma%2!=0){
            return 0;
        }
        else{
            sum=suma/2;
        }
        
        int subset[n+1][sum+1];
	
    	for(int i=0;i<=n;i++){
    		for(int j=0;j<=sum;j++){
    			if(i==0){
    				subset[i][j]=0;
    			}
    			if(j==0){
    				subset[i][j]=1;
    			}
    		}
    	}
    	
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=sum;j++){
    			if(arr[i-1]>j){
    				subset[i][j]=subset[i-1][j];
    			}
    			if(arr[i-1]<=j){
    				subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]] ;
    			}	
    		}
    	}
    	
            return subset[n][sum];
        }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends
