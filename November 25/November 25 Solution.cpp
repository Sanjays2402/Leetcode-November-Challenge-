class Solution {
public:
    int smallestRepunitDivByK(int K) {
        
        if(K%2 == 0 || K%5 == 0)
            return -1;
        
        int pre = 0;
        for(int i=1; i<=K; i++)
        {
            pre = (pre*10 + 1) % K;
            if(pre == 0)
                return i;
        }
        return -1;
    }
};
