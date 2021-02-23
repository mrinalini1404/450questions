#include <bits/stdc++.h> 
using namespace std; 

int printUnion(int a[], int b[], int m, int n) 
{ 
	int i=0;int j=0;
	while(i<m && j<n){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		if(a[i]>b[j]){
			cout<<b[j]<<" ";
			j++;
		}
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		
	}
	while(i<m){
		cout<<a[i]<<" ";
		i++;
	}
	while(j<n){
		cout<<b[j]<<" ";
		j++;
	}
	return 0;
		 
} 

int printInt(int a[], int b[], int m, int n) 
{ 
	int i=0;int j=0;
	while(i<m && j<n){
		if(a[i]<b[j]){
			i++;
		}
		if(a[i]>b[j]){
			j++;
		}
		if(a[i]==b[j]){
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		
	}
	return 0;
		 
} 


int main() 
{ 
	int arr1[] = { 1,1, 2, 4, 5, 6,9,134,154}; 
	int arr2[] = { 2, 3, 5, 7,134 }; 

	int m = sizeof(arr1) / sizeof(arr1[0]); 
	int n = sizeof(arr2) / sizeof(arr2[0]); 

	printUnion(arr1, arr2, m, n);
	cout<<endl;
	printInt(arr1, arr2, m, n); 

	return 0; 
} 

