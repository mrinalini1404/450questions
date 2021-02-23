#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int l,m,n;
	    cin>>l>>m>>n;
	    string a,b,c;
	    cin>>a>>b>>c;
	    
	    int t[l+1][m+1][n+1];
	    
	    for(int i=0;i<=l;i++){
	        for(int j=0;j<=m;j++){
	            for(int k=0;k<=n;k++){
	                if(i==0 || j==0 || k==0){
	                    t[i][j][k]=0;
	                }
	                else if(a[i-1]==b[j-1] && b[j-1]==c[k-1]){
	                    t[i][j][k]=t[i-1][j-1][k-1]+1;
	                }
	                else{
	                    t[i][j][k]=max(max(t[i-1][j][k],t[i][j-1][k]),t[i][j][k-1]);
	                }
	            }
	        }
	    }
	    
	    cout<< t[l][m][n]<<endl;
	    
	    
	}
	return 0;
}
