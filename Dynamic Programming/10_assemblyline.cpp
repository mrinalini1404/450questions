// A C++ program to find minimum possible 
// time by the car chassis to complete 
#include <bits/stdc++.h>
using namespace std;
#define NUM_LINE 2 
#define NUM_STATION 4 

// Utility function to find a minimum of two numbers 
int min(int a, int b)
{ 
	return a < b ? a : b; 
} 

int carAssembly(int a[][NUM_STATION], 
				int t[][NUM_STATION], 
				int *e, int *x) 
{ 
	int t1[NUM_STATION];
	int t2[NUM_STATION];
	t1[0]=e[0]+a[0][0];
	t2[0]=e[1]+a[1][0];
	
	for(int i=1;i<NUM_STATION;i++){
		t1[i]=min(t1[i-1]+a[0][i],t2[i-1]+t[1][i]+a[0][i]);
		t2[i]=min(t2[i-1]+a[1][i],t1[i-1]+t[0][i]+a[1][i]);
	}
	
	return min(t1[NUM_STATION-1]+x[0],t2[NUM_STATION-1]+x[1]);
	
} 

// Driver Code
int main() 
{ 
	int a[][NUM_STATION] = {{4, 5, 3, 2}, 
							{2, 10, 1, 4}}; 
	int t[][NUM_STATION] = {{0, 7, 4, 5}, 
							{0, 9, 2, 8}}; 
	int e[] = {10, 12}, x[] = {18, 7}; 

	cout << carAssembly(a, t, e, x); 

	return 0; 
} 

// This is code is contributed by rathbhupendra

