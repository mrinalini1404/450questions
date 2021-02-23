#include <iostream>
using namespace std;

// A dynamic programming based function to find nth
// Catalan number
unsigned long int catalanDP(unsigned int n)
{
	// Table to store results of subproblems
	unsigned long c[n+1];
	c[0]=c[1]=1;
	for(int i=2;i<=n;i++){
		c[i]=0;
		for(int j=0;j<i;j++){
			c[i]+=c[j]*c[i-j-1];
		}
	}
	
	return c[n];
}

// Driver code
int main()
{
	for (int i = 0; i < 10; i++)
		cout << catalanDP(i) << " ";
	return 0;
}

