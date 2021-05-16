// CPP program to find maximum product of
// a subset.
#include <bits/stdc++.h>
using namespace std;

int maxProductSubset(int a[], int n)
{
	if(n==1){
		return a[0];
	}
	int z_count=0;
	int n_count=0;
	int max_neg=INT_MIN;
	int prod=1;
	
	
	for(int i=0;i<n;i++){
		if(a[i]==0){
			z_count++;
			continue;
		}
		else if(a[i]<0){
			n_count++;
			max_neg=max(max_neg,a[i]);
		}
		
		prod=prod*a[i];
	}
	
	if(z_count==n){
		return 0;
	}
	
	
	if(n_count%2!=0){
		
		if(n_count==1 && z_count>0 && n_count+z_count==n){
			return 0;
		}
		prod=prod/max_neg;
	}
	
	
	return prod;
}

// Driver Code
int main()
{
	int a[] = { -1, -1, -2, 4, 3 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << maxProductSubset(a, n);
	return 0;
}

