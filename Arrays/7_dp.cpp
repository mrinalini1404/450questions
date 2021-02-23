// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    int max_sum=arr[0];
    int max_global=arr[0];
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" "<<max_sum+arr[i]<<endl;
        max_sum=max(arr[i],max_sum+arr[i]);
        cout<<max_sum<<endl;
        max_global=max(max_sum,max_global);
        cout<<max_global<<endl;
        cout<<endl;
    }
    // Your code here
    return max_global;
    
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
