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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* st = NULL, *ed = list2, *temp = list1;
        int con = -1;
        while(temp != NULL)
        {
            con ++;
            if(con == a)
            {
                break;
            }
            st = temp;
            temp = temp->next;
        }
        while(temp != NULL)
        {
            
            if(con == b + 1)
            {
                break;
            }
            con ++;
            temp = temp->next;
        }
        
        while(ed->next != NULL)
        {
            ed = ed->next;
        }
        if(st != NULL)
        {
            st->next = list2;
        }
        ed->next = temp;
        return list1;
        
    }
};
