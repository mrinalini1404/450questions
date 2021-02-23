// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]



long long int merge(long long arr[],long long temp[],long long int left,long long int mid,long long int right){
    
    long long int i,j,k;
    long long int count=0;
    i=left;j=mid;k=left;
    
    while((i<=mid-1) && (j<=right)){
        if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
            count+=(mid-i);
        }
        else{
            temp[k++]=arr[i++];
        }
    }
    
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    /* Copy the remaining elements of right subarray
       (if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];
        
    for (i = left; i <= right; i++)
		arr[i] = temp[i];
        
    return count;
    
}

long long int mergesort(long long arr[],long long temp[],long long int left,long long int right){
    long long int mid,count=0;
    if(right>left){
        mid=(left+right)/2;
        
        count+=mergesort(arr,temp,left,mid);
        count+=mergesort(arr,temp,mid+1,right);
        count+=merge(arr,temp,left,mid+1,right);
        
    }
    return count;
}

long long int inversionCount(long long arr[], long long n)
{
    // Your Code Here
    long long temp[n];
    mergesort(arr,temp,0,n-1);
    
}


// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
