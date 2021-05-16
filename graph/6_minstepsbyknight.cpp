// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
    bool isValid(int x,int y, int n)
    {
        return(x>=0 && y>=0 && y<n && x<n);
    }

    
    
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    // Code here
	    vector<vector<int>> vis(n,vector<int> (n,0));
        int dx[]={-1,+1,+2,-2,-2,+2,-1,1};
        int dy[]={-2,-2,-1,-1,1,1,2,2};
            
        
        KnightPos[0]-=1;
        KnightPos[1]-=1;
        TargetPos[0]-=1;
        TargetPos[1]-=1;
        
        int ans=INT_MAX;
        queue<pair<pair<int,int>,int>> qu;
        qu.push({{KnightPos[0],KnightPos[1]},0});
        vis[KnightPos[0]][KnightPos[1]]=1;
        while(!qu.empty())
        {
            int sy=qu.front().first.first;
            int sx=qu.front().first.second;
            
            int parans=qu.front().second;
            
            qu.pop();
            if(sy==TargetPos[0]&&sx==TargetPos[1])
            {
              return parans;
            }
            
    
        for(int i=0;i<8;i++)
        {
            int posx=sx+dx[i];
            int posy=sy+dy[i];
            if(isValid(posx,posy,vis.size())&&!vis[posy][posx])
            {
                vis[posy][posx]=1;
                qu.push({{posy,posx},parans+1});
            }
        }
        }
        return(ans);
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends
