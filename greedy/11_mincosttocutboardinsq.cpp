// C++ program to divide a board into m*n squares
#include <bits/stdc++.h>
using namespace std;

// method returns minimum cost to break board into
// m*n squares
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

// Driver code to test above methods
int main()
{
	int m = 6, n = 4;
	int X[m-1] = {2, 1, 3, 1, 4};
	int Y[n-1] = {4, 1, 2};
	cout << minimumCostOfBreaking(X, Y, m-1, n-1);
	return 0;
}

