#include <bits/stdc++.h> 
using namespace std; 

void segregate0and1(int arr[], int size) 
{ 
	int left=0;
	int right=size-1;
	while(left<right){
		
		if(arr[left]==1){
			swap(arr[left],arr[right]);
			right--;
		}
		else{
			left++;
		}
	
	}
} 


int main() 
{ 
	int arr[] = {0, 1, 0, 1, 1, 1}; 
	int i, arr_size = sizeof(arr)/sizeof(arr[0]); 

	segregate0and1(arr, arr_size); 

	cout << "Array after segregation "; 
	for (i = 0; i < 6; i++) 
		cout << arr[i] << " "; 
	return 0; 
} 



