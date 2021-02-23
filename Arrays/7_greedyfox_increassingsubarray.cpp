#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int result=INT_MIN;
    int i=0;
    while(i<n){
        int count=arr[i];
        while(i<n-1 && arr[i]<arr[i+1]){
            count+=arr[i+1];
            i++;
        }
        
        if(count>result){
            result=count;
        }
        i++;
    }
    return result;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
