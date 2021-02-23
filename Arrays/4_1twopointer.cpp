#include <iostream>
using namespace std;

void shiftall(int arr[], int left, int right){
	while(left<=right){
		while(arr[left]<0){
			left++;
		}
		while(arr[right]>0){
			right--;
		}
		if(left<right){
			int temp=arr[left];
			arr[left]=arr[right];
			arr[right]=temp;
			
			left++;
			right--;
		}
	}
}

void display(int arr[], int right){
	for (int i=0;i<=right;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main() 
{
	int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	shiftall(arr,0,arr_size-1);
	display(arr,arr_size-1);
	return 0;
}

/*
real	0m0.701s
user	0m0.508s
sys	0m0.144s
*/
