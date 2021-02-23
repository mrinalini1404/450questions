#include<bits/stdc++.h> 
using namespace std; 

const int MAX = 100; 

// function to find median in the matrix 
int binaryMedian(int m[][MAX], int r ,int c) 
{ 
	int mini=INT_MAX;
	int maxi=INT_MIN;
	
	for(int i=0;i<r;i++){
		mini=min(mini,m[i][0]);
		maxi=max(maxi,m[i][c-1]);
	}
	
	int desired=(r*c+1)/2;
	
	while(mini<maxi){
		
		int place=0;
		int mid=mini+(maxi-mini)/2;
	
		for (int i = 0; i < r; ++i) 
            place += upper_bound(m[i], m[i]+c, mid) - m[i]; 
        if (place < desired) 
            mini = mid + 1; 
        else
            maxi = mid; 
	}
	
	return mini;
} 

// driver program to check above functions 
int main() 
{ 
	int r = 3, c = 3; 
	int m[][MAX]= { {1,3,5}, {2,6,9}, {3,6,9} }; 
	cout << "Median is " << binaryMedian(m, r, c) << endl; 
	return 0; 
} 

