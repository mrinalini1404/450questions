// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int size){

    // Your code here
    int ans = 0;
    int left=0;
    int right=size-1;
    int maxleft=0;
    int maxright=0;
    while(left<right){
        if(arr[left]<arr[right]){
            if(arr[left]>=maxleft){
                maxleft=arr[left];
            }
            else{
                ans+=(maxleft-arr[left]);
            }
            ++left;
        }
        else{
            if(arr[right]>=maxright){
                maxright=arr[right];
            }
            else{
                ans+=maxright-arr[right];
            }
            --right;
        }
    }
    return ans;

}

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
