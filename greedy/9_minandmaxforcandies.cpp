// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int c[], int n, int k)
    {
        // Write Your Code here
        int less=0;
        int more=0;
        vector<int>a;
        sort(c,c+n);
        int j=n;
        for (int i = 0; i < j; i++) {
		    less += c[i];
		    j-=k;
		}
		
		j=0;
		for(int i=n-1;i>=j;i--){
			more+=c[i];
			j+=k;
		}		
		
        a.push_back(less); 
        a.push_back(more);       
        return a;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends
