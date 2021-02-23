#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

void binSort(int A[], int N)
{
   int count1=0;
   int count0=0;
   for(int i=0;i<N;i++){
       if(A[i]==1){
           count1++;
       }
       else{
           count0++;
       }
   }
   for(int i=0;i<count0;i++){
       A[i]=0;
   }
   for(int i=count0;i<N;i++){
       A[i]=1;
   }
   
}
