## Problem Statement:

Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

### Constraints:

    - The number of nodes in the linked list is in the range [0, 104].
    - -106 <= Node.val <= 106

# Approach

We have to solve it in constant space, in order to do it, we need to do the sorting in-place, we will maintain 2 pointer, first odd node, and even node (head & head->next), we will point the odd->next to the even's next node, and even->next to the new odd's next node, after it becomes null, we will simply point the last odd node to the first even node in the LL.