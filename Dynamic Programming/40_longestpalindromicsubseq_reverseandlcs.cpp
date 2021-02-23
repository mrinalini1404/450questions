class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string b=s;
        reverse(s.begin(), s.end()); 
        int n=s.size();
        int t[n+1][n+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    t[i][j]=0;
                }
                
               else  if(s[i-1]==b[j-1]){
                    t[i][j]=1+t[i-1][j-1];                    
                }
                 else{
                    t[i][j]=max(t[i][j-1],t[i-1][j]);
                }
            }
        }
        
        return t[n][n];
    }
};
