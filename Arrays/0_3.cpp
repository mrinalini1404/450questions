#include <bits/stdc++.h>
using namespace std;


int* reverse(int arr[],int n){
	int* arr1=new int[n];
	for(int i=0;i<n;i++){
		arr1[i]=arr[n-1-i];
	}
	return arr1;
		
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr) / sizeof(arr[0]); 
	int *arr1=reverse(arr,n);
	for (int i = 0; i < n; i++)
   		cout << *(arr1+i) << " ";
   cout << endl;
   return 0;	
}
