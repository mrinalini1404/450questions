using namespace std;

//using temp array
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int temp[d];
        for(int i=0;i<d;i++){
            temp[i]=arr[i];
        }
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
            //cout<<arr[i]<<" ";
        }
        
        int j=0;
        for(int i=n-d;i<n;i++){
            arr[i]=temp[j];
            j++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "; 
        }
        /*
        for(int i=0;i<d;i++){
            cout<<temp[i]<<" ";
        }
        */
        cout<<endl;
	}
	return 0;
}
