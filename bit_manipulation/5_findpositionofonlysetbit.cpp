// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
    bool ispow(int n){
        
        return n && (!(n&(n-1)));
        
    }
  
    int findPosition(int n) {
        // code here
        if(ispow(n)==false){
            return -1;
        }
        
        int count=0;
        while(n){
            n=n>>1;
            count++;
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
