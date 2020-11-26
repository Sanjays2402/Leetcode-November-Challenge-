class Solution {
public:
    int longestSubstring(string s, int k) {
        
        if(s.size() == 0)
           return 0;
        if(k <= 1)
            return s.size();
        
        vector<int> hash(26, 0);
        for(char itr: s)
            hash[itr-'a']++;
        
        int i=0;
        while(i<s.size() && hash[s[i]-'a'] >= k)
            i++;
        
        if(i == s.size())
            return s.size();
        
        int left = longestSubstring(s.substr(0, i), k);
        int right = longestSubstring(s.substr(i+1), k);
        
        return max(left, right);
        
    }
};
