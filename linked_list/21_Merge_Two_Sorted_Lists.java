// 21_Merge_Two_Sorted_Lists

/**
 * Definition for singly-linked list. public class ListNode { int val; ListNode
 * next; ListNode(int x) { val = x; } }
 */

class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode ansHead = new ListNode(-1);
        ListNode ansEnd = ansHead;

        while(l1 != null && l2 != null) {
            int val = l1.val > l2.val ? l2.val : l1.val;
            ListNode nextNode = new ListNode(val);
            if(l1.val > l2.val) {
                l2 = l2.next;
            } else {
                l1 = l1.next;
            }

            ansEnd.next = nextNode;
            ansEnd = ansEnd.next;
        }

        while(l1 != null) {
            ListNode nextNode = new ListNode(l1.val);
            ansEnd.next = nextNode;
            ansEnd = ansEnd.next;
            l1 = l1.next;
        }

        while(l2 != null) {
            ListNode nextNode = new ListNode(l2.val);
            ansEnd.next = nextNode;
            ansEnd = ansEnd.next;
            l2 = l2.next;
        }

        return ansHead.next;
    }
}