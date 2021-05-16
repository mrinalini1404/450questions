// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        
        sort(a, a + n);
        long long int sum=0;
        int i = 0;
       
        // Iterate from 0 to n - 1
        for (i = 0; i < n; i++) {
            if (k && a[i] < 0) {
                a[i] *= -1;
                k--;
                continue;
            }
            break;
        }
        if (i == n)
            i--;
     
        if (k == 0 || k % 2 == 0) {
            for(int i=0;i<n;i++){
                sum+=a[i];
            }
            return sum;
        }
     
        if (abs(a[i]) >= abs(a[i - 1])) {
            i--;
        }
     
        a[i] *= -1;
        
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}  // } Driver Code Ends
