// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> arr) 
    {
        // Code here.
        int n=arr.size();
        vector<int>a;
        
        int x=arr[0];
        
        int l=0;
        int m=0;
        
        int i,set_bit;
        
        for(i=1;i<n;i++){
            x^=arr[i];
        }
        
        set_bit=x & ~(x-1);
        
        
        for(i=0;i<n;i++){
            
            if(arr[i] & set_bit){
                l=l^arr[i];
            }
            else{
                m=m^arr[i];
            }
            
        }
        
        a.push_back(l);
        a.push_back(m);
        sort(a.begin(),a.end());
        
        return a;
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}  // } Driver Code Ends
