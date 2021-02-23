// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
int t[10001][10001]={-1};

// User function Template for C++

class Solution{
    
    
    public:
    bool isPalin(string s,int i,int j){
        int l=i;
        int h=j;
        while(h>l){
            if(s[l++]!=s[h--]){
                return false;
            }
        }
        return true;
    }
    
    int palin(string str,int i,int j){
        
    	
        if(i>=j)return 0;
        if(isPalin(str,i,j))return 0;
        if(t[i][j]!=-1)return t[i][j];
        int temp;
        int ans=INT_MAX;
        for(int k=i;k<=j-1;k++){
            temp=palin(str,i,k)+palin(str,k+1,j)+1;
            ans=min(ans,temp);
        }
        // code here
        return t[i][j]=ans;
    }

    int palindromicPartition(string str)
    {
        int i=0;
        int j=str.size()-1;
        return palin(str,i,j);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
