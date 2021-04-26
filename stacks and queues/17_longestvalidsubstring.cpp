// { Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        int n=s.size();
        int count=0;
        stack<int>t;
        t.push(-1);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                t.push(i);
            }
            else{
                if (!t.empty())  
                { 
                    t.pop(); 
                } 
                  
                if (!t.empty()) 
                    count = max(count, i - t.top()); 
                else
                    t.push(i); 
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
