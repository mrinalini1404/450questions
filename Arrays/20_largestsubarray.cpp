// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int arr[], int n)
{
    // Your code here
    int sum=0;
    int count=0;
    unordered_map<int,int>s;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if (arr[i] == 0 && count == 0)
            count = 1;
        if(sum==0){
            count= i+1;
        }
        if(s.find(sum)!=s.end()){
            count=max(count,i-s[sum]);
        }
        else{
            s[sum]=i;
        }
    }
    return count;
}

