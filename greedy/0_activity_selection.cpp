// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    
    static bool pairCompare(const pair<pair<int, int>, int> &a,
                     const pair<pair<int, int>, int> &b) 
    {
        if (a.first.second != b.first.second) {
            return a.first.second < b.first.second;
        }
        return a.second < b.second;
    }
    
    
    int maxMeetings(int start[], int end[], int n) 
    {
    
        vector<pair<pair<int, int>, int>> x;
     
        for (int i = 0; i < n; i++) 
            x.push_back({{start[i], end[i]}, i + 1});
    
        //sorting the list.
        sort(x.begin(), x.end(), pairCompare);
        int last = 0;
        int res = 0;
        
        for (int i = 0; i < n; i++)
        {
            if (x[i].first.first > last) 
            {
                res++;
                last = x[i].first.second;
            }
        }
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
