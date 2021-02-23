// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// The main function that returns value of a given postfix expression
int evaluatePostfix(string a)
{
    // Your code here
    stack<int>s;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(isdigit(a[i])){
            s.push(a[i]-'0');
        }
        if(a[i]=='*'){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            int z=x*y;
            s.push(z);
        }
        if(a[i]=='/'){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            int z=y/x;
            s.push(z);
        }
        if(a[i]=='+'){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            int z=x+y;
            s.push(z);
        }
        if(a[i]=='-'){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            int z=y-x;
            s.push(z);
        }
    }
    
    return s.top();
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
    
    cout<<evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
