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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        int k = 0;
        while (head != NULL)
        {
            if (head->val == 0)
            {
                head = head->next;
            }
            else
            {
                k = k + head->val;
                if (head->next->val == 0)
                {
                    ListNode *tempo = new ListNode(k);
                    temp->next = tempo;
                    temp = temp->next;
                    k = 0;
                }
                head = head->next;
            }
        }
        return dummy->next;
    }
};