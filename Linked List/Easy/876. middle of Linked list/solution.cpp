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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *temp = head;
        int length = 1;
        while (temp != NULL)
        {
            temp = temp->next;
            length++;
        }

        if (length % 2 != 0)
        {
            ListNode *slow = head;
            ListNode *fast = head;

            while (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
        else
        {
            ListNode *slow = head;
            ListNode *fast = head->next;

            while (fast != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
    }
};