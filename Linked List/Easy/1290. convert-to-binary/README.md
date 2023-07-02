This is the Leetcode problem 1290, below is the problem definition and the most optimal approach, with it's complexity analysis

# Problem Definition

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.

Constraints:

The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.

## Approach

1. 
- Take a variable, 'k' to store the sum (decimal value) of the Linked List elements, multiply it by 2 and add the value of head in it every time we traverse the linked list.
- Intuition: 
- Time Complexity - O(n)
- Space Complexity - O(1)

2. Store the value of Linked list in binary, inside a string, initialize a bitset with the value of string and convert it into decimal using STL Functions.