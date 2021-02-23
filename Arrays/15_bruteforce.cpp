// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long int count=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                count+=1;
            }
        }
        
    }
    return count;
    
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
