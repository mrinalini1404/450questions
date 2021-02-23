#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;

    int m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int mindiff=INT_MAX;
    sort(arr,arr+n);
    for(int k=0;k<n-m+1;k++){
        mindiff=min(mindiff,arr[k+m-1]-arr[k]);
    }
    return mindiff;
    
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    cout<<solve()<<endl;
	}
	return 0;
}
