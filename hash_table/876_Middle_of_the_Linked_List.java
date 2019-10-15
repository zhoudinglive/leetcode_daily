// 876_Middle_of_the_Linked_List

// public class ListNode { 
//     int val; 
//     ListNode next; 
//     ListNode(int x) { 
//         val = x; 
//     }
// }

class Solution {
    public ListNode middleNode(ListNode head) {
        int length = 0;
        ListNode curr = head;
        while (curr.next != null) {
            curr = curr.next;
            length += 1;
        }

        int ans = length % 2 == 0 ? length / 2 : length / 2 + 1;
        curr = head;
        while (ans > 0) {
            curr = curr.next;
            ans -= 1;
        }
        return curr;
    }
}