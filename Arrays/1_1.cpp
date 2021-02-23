#include <bits/stdc++.h>
using namespace std;


struct result{
	int min;int max;
};

struct result max_min(int arr[],int n){
	struct result ans;
	int i;
	if(n==1){ans.min=arr[0]; ans.max=arr[0];}
	
	if(arr[1]>arr[0]){ans.min=arr[0];ans.max=arr[1];}
	else{ans.min=arr[1];ans.max=arr[0];}
	
	for(int i=2;i<n;i++){
		if(arr[i]<ans.min){
			ans.min=arr[i];
		}
		else if(arr[i]>ans.max){
			ans.max=arr[i];
		}
	}
	return ans;
	
}
int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int n=sizeof(arr) / sizeof(arr[0]); 
	struct result minmax = max_min(arr,n);
	cout<< minmax.min <<" "<< minmax.max ;
	cout << endl;
	return 0;	
}
