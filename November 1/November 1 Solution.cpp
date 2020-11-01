/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        int val = 0, k=0;
        vector<int> arr;
        while(head != NULL)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        for(int i=arr.size()-1; i>=0; i--)
            val += arr[i]*pow(2,k++);
        return val;
    }
};
