// 206_Reverse_Linked_List

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode ansHead = new ListNode(-1);
        while(head != null) {
            ListNode newNode = new ListNode(head.val);
            newNode.next = ansHead.next;
            ansHead.next = newNode;
            head = head.next;
        } 
        return ansHead.next;
    }
}
