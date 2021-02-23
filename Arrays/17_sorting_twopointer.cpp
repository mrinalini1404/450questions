// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int sum) {
        int ans = 0; 
       
        sort(arr, arr + n); 
       
        int i = 0, j = n - 1; 
      
        while (i < j) { 
            
            if (arr[i] + arr[j] < sum) 
                i++; 
      
            else if (arr[i] + arr[j] > sum) 
                j--; 
      
            else { 
                
                //handling duplicates
                //Find the freq of arr[i]
                int x = arr[i], xx = i; 
                while (i < j and arr[i] == x) 
                    i++; 
      			//find the frequenct of arr[j]
                int y = arr[j], yy = j; 
                while (j >= i and arr[j] == y) 
                    j--; 
      			//if they're same then remove extra number counted
                if (x == y) { 
                    int temp = i - xx + yy - j - 1; 
                    ans += (temp * (temp + 1)) / 2; 
                } 
                else
                    ans += (i - xx) * (yy - j); 
               
                
            }
    } 
  
    // Return the required answer 
    return ans; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends
