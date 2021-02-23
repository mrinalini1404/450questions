// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for 

bool find3Numbers(int arr[], int n, int k)
{
    //Your Code Here
    int l,r;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==k){
                return 1;
            }
            else if(arr[i]+arr[l]+arr[r]>k){
                r--;
            }
            else if(arr[i]+arr[l]+arr[r]<k){
                l++;
            }
            
        }
    }
    
    return 0;
    
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
  // } Driver Code Ends
