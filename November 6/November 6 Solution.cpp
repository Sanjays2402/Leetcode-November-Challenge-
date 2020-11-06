class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low=1, high=nums.back(), i;
        while(low <= high)
        {
            int sum = 0;
            i = low + (high-low)/2;
            for(int j: nums)
            {
                double k=i, l=j;
                sum += ceil(l/k);
            }
            if(sum <= threshold)
                high = i - 1;
            else 
                low = i + 1;
        }
        return low;
    }
};
