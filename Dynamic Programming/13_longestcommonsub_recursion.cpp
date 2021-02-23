// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

int lcs(int, int, string, string);

int main()
{
    int t,n,k,x,y;
    
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        
        cout << lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
// } Driver Code Ends


// function to find longest common subsequence

int lcs(int n, int m, string x, string y){
    
    // your code here
    if(n==0 || m==0){
        return 0;
    }
    
    
    if(x[n-1]==y[m-1]){
        return 1+lcs(n-1,m-1,x,y);
    }
    else{
        
        return max(lcs(n,m-1,x,y),lcs(n-1,m,x,y));
        
    }
    
}

