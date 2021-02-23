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
	int t[n+1];
	t[0]=1;
	for(int i=1;i<=n;i++){
		t[i]=i*t[i-1];
	}
	
	return t[n]/t[n-k];
	
} 

// Driver Code 
int main() 
{ 
	int n = 10, k = 2; 
	printf("Value of P(%d, %d) is %d ", 
			n, k, permutationCoeff(n, k)); 
	return 0; 
} 

