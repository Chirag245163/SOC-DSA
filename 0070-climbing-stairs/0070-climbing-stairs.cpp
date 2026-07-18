class Solution {
public:
    int climb(int n, int stair, vector<int>& dp) {

        if (stair == n)
            return 1;

        if (stair > n)
            return 0;

        if (dp[stair] != -1)
            return dp[stair];

        dp[stair] = climb(n, stair + 1, dp) + climb(n, stair + 2, dp);

        return dp[stair];
    }

    int climbStairs(int n) {

        vector<int> dp(n + 1, -1);

        return climb(n, 0, dp);
    }
};