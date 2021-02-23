// C++ implementation to find the smallest sum 
// contiguous subarray 
#include <bits/stdc++.h> 

using namespace std; 

// function to find the smallest sum contiguous subarray 
int smallestSumSubarr(int arr[], int n) 
{ 
	int min_sum=arr[0];
    int min_global=arr[0];
    for(int i=1;i<n;i++){
        //cout<<arr[i]<<" "<<max_sum+arr[i]<<endl;
        min_sum=min(arr[i],min_sum+arr[i]);
        //cout<<max_sum<<endl;
        min_global=min(min_sum,min_global);
        //cout<<min_global<<endl;
        //cout<<endl;
    }
    // Your code here
    return min_global;
} 


// Driver program to test above 
int main() 
{ 
	int arr[] = {3, -4, 2, -3, -1, 7, -5}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Smallest sum: "
		<< smallestSumSubarr(arr, n); 
	return 0;	 
} 

