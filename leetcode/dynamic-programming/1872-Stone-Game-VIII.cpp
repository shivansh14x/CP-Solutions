class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();
        vector<int> prefix(n);
        prefix[0] = stones[0];
        for(int i=1; i<n; i++){
            prefix[i] = stones[i] + prefix[i-1];
        }
        
        //dp[i] = max score difference achievable by curr player considering choices from idx i to n-1
        //dp[i] = max(pre[i]-dp[i+1] , dp[i+1])
        //base case : dp[n-1] = pre[n-1]
        //final subprblm : dp[1]

        vector<int> dp(n , 0);
        dp[n-1] = prefix[n-1];

        for(int i=n-2; i>0; i--){
            dp[i] = max(prefix[i]-dp[i+1] , dp[i+1]);
        }
        return dp[1];
    }
};