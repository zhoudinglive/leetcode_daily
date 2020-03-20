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
    int numComponents(ListNode *head, vector<int> &G) {
        int cmt[10005];
        memset(cmt, 0, sizeof(cmt));

        for(int i = 0; i < G.size(); ++i) {
            cmt[G[i]] = 1;
        }

        int cnt = 0;
        bool is_connect = false;
        while(head) {
            if(!is_connect && cmt[head->val]) {
                cnt += 1;
                is_connect = true;
            } else if(!cmt[head->val]) {
                is_connect = false;
            }
            head = head->next;
        }
        return cnt;
    }
};