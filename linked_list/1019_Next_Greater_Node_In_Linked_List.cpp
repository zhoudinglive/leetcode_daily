/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode *head){
        vector<int> ans;
        ListNode  *current = head;
        while(current) {
            int curr_val = current->val;
            if(current->next) {
                ListNode *next = current->next;
                int next_larger_val = 0;
                while(next && next->val <=\ curr_val) {
                    next = next->next;
                }
                if(next) {
                    next_larger_val = next->val;
                }
                ans.push_back(next_larger_val);
            }
            current = current->next;
        }
        ans.push_back(0);
        return ans;
    }
};