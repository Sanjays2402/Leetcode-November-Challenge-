class Solution {
public:
    int longestMountain(vector<int>& A) {
        
        if(A.size() < 3)
            return 0;
        
        int res = 0, n=A.size(), out=0;
        
        for(int i=1; i<n; i++)
        {
            int j=i, flag=0, count=1;
            while(j<n && A[j-1] < A[j])
                count++, j++;
            
            while(i!=j && j<n && A[j-1] > A[j])
                count++, j++, flag=1;
            
            if(flag && count>2)
                res = max(res, count), j--;
            
            i=j;
        }
        
        return res;
    }
};
