// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    int sum=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0 || s.find(sum)!=s.end()){
            return true;
        }
        s.insert(sum);
    }
    return false;
}



