#include<bits/stdc++.h>
using namespace std;
int eggDrop(int n, int k)
{
	
	int eggs[n+1][k+1];
	
	for(int i=0;i<=n;i++){
		eggs[i][0]=0;
		eggs[i][1]=1;
	}
	
	for(int i=0;i<=k;i++){
		eggs[0][i]=0;
		eggs[1][i]=i;
	}
	
	
	int ans=0;
	
	for(int i=2;i<=n;i++){
		for(int j=2;j<=k;j++){
			eggs[i][j] = INT_MAX;
			for(int x=1;x<=j;x++){
			
				ans=1+max(eggs[i-1][x-1],eggs[i][j-x]);
				
				eggs[i][j]=min(eggs[i][j],ans);	
				
			}
			
		}
	}
	
	return eggs[n][k];
	
}

/* Driver program to test to pront printDups*/
int main()
{
	int n = 2, k = 36;
	printf("\nMinimum number of trials "
		"in worst case with %d eggs and "
		"%d floors is %d \n",
		n, k, eggDrop(n, k));
	return 0;
}

