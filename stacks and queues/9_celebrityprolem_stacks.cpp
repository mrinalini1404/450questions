// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
    public:
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
    stack<int> s;
 
    // Celebrity
    int C; 
 
    // Push everybody to stack
    for (int i = 0; i < n; i++)
        s.push(i);
 
    // Extract top 2
    int A = s.top();
    s.pop();
    int B = s.top();
    s.pop();
 
    // Find a potential celebrity
    while (s.size() > 1)
    {
        if (M[A][B])
        {
            A = s.top();
            s.pop();
        }
        else
        {
            B = s.top();
            s.pop();
        }
    }
    // If there are only two people 
    // and there is no
    // potential candicate
    if(s.empty())
        return -1;
   
   
    // Potential candidate?
    C = s.top();
    s.pop();
 
    // Last candidate was not 
    // examined, it leads one 
    // excess comparison (optimize)
    if (M[C][B])
        C = B;
 
    if (M[C][A])
        C = A;
 
    // Check if C is actually
    // a celebrity or not
    for (int i = 0; i < n; i++)
    {
        // If any person doesn't 
        // know 'a' or 'a' doesn't 
        // know any person, return -1
        if ( (i != C) &&
                (M[C][i] || 
                 !M[i][C]) )
            return -1;
    }
 
    return C;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends
