/* Dynamic Programming implementation of LCS problem */
#include<bits/stdc++.h>
using namespace std; 

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
void lcs( char *x, char *y, int m, int n ) 
{ 
	int t[m+1][n+1];
		
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0 || j==0){
				t[i][j]=0;
			}
		
			else if(x[i-1]==y[j-1]){
				t[i][j]=t[i-1][j-1]+1;
			}
			else{
				t[i][j]=max(t[i-1][j],t[i][j-1]);
			}
			
		}
	}
	int index=t[m][n];
	char lcs[index+1];
	
	int i=m;int j=n;
	while(i>0 && j>0){
		if(x[i-1]==y[j-1]){
			lcs[index-1]=x[i-1];
			i--;
			j--;
			index--;
		}
		else if(t[i][j-1]<t[i-1][j]){
			i--;
		}
		else{
			j--;
		}
	}
	
	cout << "LCS of " << x << " and " << y << " is " <<lcs<<endl; 
	
} 

/* Driver program to test above function */
int main() 
{ 
	char X[] = "AGGTAB"; 
	char Y[] = "GXTXAYB"; 
	int m = strlen(X); 
	int n = strlen(Y); 
	lcs(X, Y, m, n); 
	return 0; 
} 

