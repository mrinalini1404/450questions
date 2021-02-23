#include <bits/stdc++.h> 
using namespace std;

string solve(){
    int n,m;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+m);
    sort(b,b+n);
    int i=0;int j=0;
    while(i<n && j<m){
        if(a[j]<b[i]){
            j++;
        }
        else if(a[j]==b[i]){
            i++;
            j++;
        }
        else if(a[j]>b[i]){
            return "No";
        }
    }
    
    return (i<n) ? "No":"Yes";
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    cout<<solve()<<endl;
	}
	return 0;
}
