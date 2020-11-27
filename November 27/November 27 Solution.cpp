class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int sum =0;
        for(int i: nums)
            sum += i;
        
        if(sum%2)
            return 0;
        
        vector<int> dp(sum/2 + 1, 0);
        dp[0]=1;
        
        for(int i: nums)
        {
            for(int j=sum/2; j>=i; j--)
            {
                dp[j] = dp[j] || dp[j-i];
            }
        }
        
        return dp[sum/2];
    }
};
