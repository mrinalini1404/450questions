// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#define MAX 26
class Solution{
public:
    string chooseandswap(string a){
        int n=a.size();
        
        // Code Here
        
        int i,j;
        
        int check[MAX];
        
        for(i=0;i<MAX;i++){
            check[i]=-1;
        }
        
        
        for(i=0;i<n;i++){
            if(check[a[i]-'a']==-1){
                check[a[i]-'a']=i;
            }
        }
        
        for(i=0;i<n;i++){
            bool flag= false;
            
            for(j=0;j<a[i]-'a';j++){
                if(check[j]>check[a[i]-'a']){
                    flag=true;
                    break;
                }
            }
            
                
            if(flag)
                break;
        }
        
        
        if(i<n){
            char ch1=a[i];
            char ch2=char(j+'a');
            
            for (i = 0; i < n; i++) {
                if (a[i] == ch1)
                    a[i] = ch2;
      
                else if (a[i] == ch2)
                    a[i] = ch1;
            }
        }
        
        return a;
        
    }
    
};


// { Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}
  // } Driver Code Ends
