class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        if(start >= arr.size())
            return false;
        
        unordered_map<int, int> visit;
        queue<int> q;
        q.push(start);
        while(q.size())
        {
            int cur = q.front();
            q.pop();
            if(cur >=0 && cur < arr.size())
            {
                cout<<cur<<endl;
                if(arr[cur] == 0)
                    return true;
                if(!visit[cur])
                {
                    q.push(cur + arr[cur]);
                    q.push(cur - arr[cur]);
                }
                visit[cur]++;
            }
        }
        
        return false;
    }
};
