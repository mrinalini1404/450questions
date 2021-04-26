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
 
    return m;
    
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
