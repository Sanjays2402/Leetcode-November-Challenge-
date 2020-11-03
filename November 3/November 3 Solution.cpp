class Solution {
public:
    int maxPower(string s) {
        
        if(s.size() == 0)
            return 0;
        
        int result=1, count=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
                count++;
            else
            {
                result = max(result, count);
                count = 1;
            }
        }
        result = max(result, count);
        return result;
    }
};
