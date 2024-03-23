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
    void reorderList(ListNode* head) {
        if(head == NULL && head->next == NULL)
            return;
        int con = 0;
        ListNode *temp = head, *prev = head;
        while(temp != NULL)
        {
            con ++;
            temp = temp->next;
        }
        if(con%2 != 0)
        con = (con/2) + 1;
        else
        con = con/2;
        temp = head;
        while(con--)
        {
            prev = temp;
            temp = temp->next;
        }
        stack<ListNode*> stk;
        while(temp != NULL)
        {
            stk.push(temp);
            temp = temp->next;
        }
        prev->next = NULL;
        temp = head;
        while(!(stk.empty()))
        {
            stk.top()->next = temp->next;
            temp->next = stk.top();
            temp = stk.top()->next;
            stk.pop();
        }
    }
};
