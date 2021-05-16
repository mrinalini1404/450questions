#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,h,n;
	    cin>>w>>h>>n;
	    if(w == 0 || h == 0)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	     int a[n+2],b[n+2];
	     a[0]=1,b[0]=1,a[n+1]=w,b[n+1]=h;
	     
	     for(int i=1; i<=n; i++){
	         cin>>a[i]>>b[i];
	     }
	     
	     sort(a,a+n+2);
	     sort(b,b+n+2);
	     
	     int max1 = 0, max2 = 0;
		for (int i = 0; i < n+1; i++) {
			max1 = max(max1, a[i + 1] - a[i] - 1);
		}
		for (int i = 0; i <n+1; i++) {
			max2 = max(max2, b[i + 1] - b[i] - 1);
		}
		cout << max1*max2 << endl;
	     
	}
	return 0;
}
