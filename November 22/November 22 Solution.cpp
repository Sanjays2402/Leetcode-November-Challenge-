class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        unordered_set<string> st;
        vector<string> a = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(string i: words)
        {
            string s = "";
            for(char j: i)
            {
                s += a[j-'a'];
            }
            st.insert(s);
        }
        
        return st.size();
    }
};
