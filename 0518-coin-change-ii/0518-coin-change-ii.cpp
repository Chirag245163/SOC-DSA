class Solution {
public:
    int ans(int amount, vector<int>& coins, vector<vector<int>>& dp,int index){
        if(amount==0){
            return 1;
        }
        if(amount < 0) return 0;
        if(index==coins.size())return 0;
        if(dp[index][amount]!=-1)return dp[index][amount];
        return dp[index][amount]=ans(amount-coins[index],coins,dp,index)+ans(amount,coins,dp,index+1);
    }
    int change(int amount, vector<int>& coins) {
       vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
       sort(coins.begin(),coins.end());
       return ans(amount,coins,dp,0);
    }
};