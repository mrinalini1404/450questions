// A Dynamic Programming based 
// solution that uses table P[][] 
// to calculate the Permutation 
// Coefficient 
#include<bits/stdc++.h> 
using namespace std;

// Returns value of Permutation 
// Coefficient P(n, k) 
int permutationCoeff(int n, int k) 
{ 
	int t[n+1][k+1];
	
	int i,j;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=min(i,k);j++){
			if(j==0){
				t[i][j]=1;
			}
			else{
				t[i][j]=t[i-1][j]+(j*t[i-1][j-1]);
			}
			//Important
			t[i][j+1]=0;
		}
	}
	
	return t[n][k];
	
} 

// Driver Code 
int main() 
{ 
	int n = 10, k = 2; 
	printf("Value of P(%d, %d) is %d ", 
			n, k, permutationCoeff(n, k)); 
	return 0; 
} 

