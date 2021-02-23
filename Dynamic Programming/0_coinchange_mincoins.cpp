class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int t[amount+1];
        for(int i=0;i<amount+1;i++){
            t[i]=amount+1;
        }
        t[0]=0;
        
        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(coins[j]<=i){
                   t[i] = min(t[i], t[i - coins[j]] + 1);
                }
            }
        }
        
        return t[amount]>amount ? -1 : t[amount];
        
    }
};
