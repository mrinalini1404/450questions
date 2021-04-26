// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Maximum Rectangular area in a histogram
// arr[]: input array
// n: size of array

class Solution
{
    public:
        long long getMaxArea(long long arr[], int n){
    
    // Your code here
        long long ans=0;
        long long result=0;
        stack<long long>s;
        
        int i=0;
        while(i<n){
            if(s.empty() || arr[s.top()]<=arr[i]){
                s.push(i++);
            }
            else{
                int temp=s.top();
                s.pop();
                
                ans = arr[temp] * (s.empty() ? i :  i - s.top() - 1); 
  
                // update max area, if needed 
                if (result  < ans) 
                    result = ans; 
            }
        }
        
    
        while (s.empty() == false) 
        { 
            int temp = s.top(); 
            s.pop(); 
            ans = arr[temp] * (s.empty() ? i : i - s.top() - 1); 
      
                if (result  < ans) 
                    result = ans; 
        } 

        
        return result;
        
    
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
