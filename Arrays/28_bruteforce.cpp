#include<bits/stdc++.h>

using namespace std;

int trappingWater(int height[], int n){

    int ans=0;
    for(int i=0;i<n-1;i++){
        int left=0;
        int right=0;
        for(int j=i;j>=0;j--){
            left=max(left,height[j]);
        }
        for(int j=i;j<n;j++){
            right=max(right,height[j]);
        }
        ans+=min(left,right)-height[i];
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
}  // } Driver Code Endss
