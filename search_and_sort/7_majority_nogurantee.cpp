// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int A[], int n)
{
    
    int m;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (i == 0) {
            m = A[j], i = 1;
        }
 

        else {
            (m == A[j]) ? i++ : i--;
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(A[i]==m){
            count+=1;
        }
    }
    if(count>n/2){
        return m;
    }
    else{
        return -1;
    }
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
