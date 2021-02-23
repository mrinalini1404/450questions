// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}// } Driver Code Ends




int sb(int arr[], int n, int k)
{
    // Your code goes here   
    // stores the current window sum
    int windowSum = 0;
 
    // stores the result
    int len = INT_MAX;
 
    // stores the window's starting index
    int left = 0;
 
    // maintain a sliding window `[left…right]`
    for (int right = 0; right < n; right++)
    {
        // include the current element in the window
        windowSum += arr[right];
 
        // the window becomes unstable if its sum becomes more than `k`
        while (windowSum > k && left <= right)
        {
            // update the result if the current window's length is less than the
            // minimum found so far
            len = min(len, right - left + 1);
 
            // remove elements from the window's left side till the window
            // becomes stable again
            windowSum -= arr[left];
            left++;
        }
    }
 
    // return result
    return len;
}s
