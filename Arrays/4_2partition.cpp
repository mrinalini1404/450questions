#include <iostream>
using namespace std;

void shiftall(int arr[], int left, int right){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=j){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			j++;
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
