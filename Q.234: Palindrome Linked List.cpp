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
private:
    ListNode* rev(ListNode* head)
    {
        ListNode* curr = head, *prev = NULL, *nxt = NULL;
        while(curr != NULL)
        {
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode *sl = head, *fs = head->next, *hf;
         cout<<sl->val;
        while(sl != NULL && sl->next != NULL && fs != NULL && fs->next != NULL)
        {
            sl = sl->next;
            fs = fs->next->next;
        }
        hf = rev(sl->next);
        sl = head;
        while(sl != NULL && hf != NULL)
        {
            if(sl->val != hf->val)
            {
                return 0;
            }
            sl = sl->next;
            hf = hf->next;
        }
        return 1;
    }
};
