#include <bits/stdc++.h>
using namespace std;
int minimumCostOfBreaking(int x[], int y[], int m, int n)
{
	int cost=0;
	sort(x,x+m, greater<int>());
	sort(y,y+n, greater<int>());
	
	int i=0;int h=1;
	int j=0;int v=1;
	
	while(i<m && j<n){
		if(x[i]>y[j]){
			cost+=x[i]*v;
			h++;
			i++;
		}
		else{
			cost+=y[j]*h;
			v++;
			j++;
		}
	}
	
	while(i<m){
		cost+=x[i]*v;
		i++;
	}
	while(j<n){
		cost+=y[j]*h;
		j++;
	}
	
	return cost;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int x[m-1],y[n-1];
	    for(int i=0;i<m-1;i++){
	    	cin>>x[i];
	    } 
	    
	    for(int i=0;i<n-1;i++){
	    	cin>>y[i];
	    }
	     	     
	    cout << minimumCostOfBreaking(x, y, m-1, n-1)<<endl;
	    
	}
	return 0;
}
