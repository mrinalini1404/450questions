#include<bits/stdc++.h>
using namespace std;

const int MAX = 100;


int getMaxGold(int goldy[][MAX], int m, int n)
{
	int gold[m][n];
	
	memset(gold,0,sizeof(gold));
	
	for(int col=n-1;col>=0;col--){
		for(int row=0;row<m;row++){
		
			int right = (col==n-1)?0:gold[row][col+1];
			
			int right_up = (row==0 || col==n-1)?0:gold[row-1][col+1];
			
			int right_down= (row==n-1 || col==n-1)?0:gold[row+1][col+1];
		
		
			gold[row][col]=goldy[row][col]+max(right,max(right_up,right_down));
		}
	}
	
	
	int res = gold[0][0];
    for (int i=1; i<m; i++)
        res = max(res, gold[i][0]);
    return res;
	
}

// Driver Code
int main()
{
	int gold[MAX][MAX]= { {1, 3, 1, 5},
		{2, 2, 4, 1},
		{5, 0, 2, 3},
		{0, 6, 1, 2}
	};
	int m = 4, n = 4;
	cout << getMaxGold(gold, m, n);
	return 0;
}

