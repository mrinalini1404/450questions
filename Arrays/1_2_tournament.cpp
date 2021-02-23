#include <bits/stdc++.h>
using namespace std;


struct result{
	int min;int max;
};

struct result max_min(int arr[],int low,int high){
	struct result ans,mml,mmr;
	int mid;
	//if one element
	if(low == high){
		ans.min=arr[low];
		ans.max=arr[high];
		return ans;
	}
	//if two elements
	if(low+1 == high){
	
		if(arr[low]<arr[high]){
			ans.min=arr[low];
			ans.max=arr[high];
		}
		else{
			ans.min=arr[high];
			ans.max=arr[low];
		}
		return ans;
	}
	mid=(low+high)/2;
	mml=max_min(arr,low,mid);
	mmr=max_min(arr,mid+1,high);
	
	// Compare minimums of two parts
    if (mml.min < mmr.min)
        ans.min = mml.min;
    else
        ans.min = mmr.min;     
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        ans.max = mml.max;
    else
        ans.max = mmr.max;     
     
    return ans;	
	
}
int main(){
	int arr[]={1,2,-3,4,5,6,7,8};
	int n=sizeof(arr) / sizeof(arr[0]); 
	struct result minmax = max_min(arr,0,n-1);
	cout<< minmax.min <<" "<< minmax.max ;
	cout << endl;
	return 0;	
}
