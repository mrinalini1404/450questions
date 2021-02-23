// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{
public:
    int countFriendsPairings(int n) 
    { 
        // code here
        long long t[n+1];
        t[0]=0;
        t[1]=1;
        t[2]=2;
        for(int i=3;i<=n;i++){
            t[i]=t[i-1]+(i-1)*t[i-2];
        }
        return t[n];
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
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends
