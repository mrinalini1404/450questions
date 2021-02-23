// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends

void sort012(int arr[], int n)
{
    int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++){
		
		switch(arr[i]){
			case 0:
				c0++;
				break;
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
		}
	}
	
	int i=0;
	
	while(i<c0){
		arr[i]=0;
		i++;
	}
	while(i<c0+c1){
		arr[i]=1;
		i++;
	}
	while(i<c0+c1+c2){
		arr[i]=2;
		i++;
	}
}
