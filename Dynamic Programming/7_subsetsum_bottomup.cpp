// A Dynamic Programming solution
// for subset sum problem
#include <stdio.h>


bool isSubsetSum(int set[], int n, int sum)
{

	bool subset[n+1][sum+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(i==0){
				subset[i][j]=false;
			}
			if(j==0){
				subset[i][j]=true;
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(set[i-1]>j){
				subset[i][j]=subset[i-1][j];
			}
			if(set[i-1]<=j){
				subset[i][j]=subset[i-1][j] || subset[i-1][j-set[i-1]] ;
			}	
		}
	}
	
	return subset[n][sum];
	
	/* // uncomment this code to print table
	for (int i = 0; i <= n; i++)
	{
	for (int j = 0; j <= sum; j++)
		printf ("%4d", subset[i][j]);
	printf("\n");
	}*/

}

// Driver code
int main()
{
	int set[] = { 3, 34, 12, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		printf("Found a subset with given sum");
	else
		printf("No subset with given sum");
	return 0;
}
// This code is contributed by Arjun Tyagi.

