/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head -> next == NULL)
    {
        return NULL;
    }

    struct ListNode *temp = head;
    int c = 0;
    while(temp != NULL)
    {
        c ++;
        temp = temp->next;
    }
    temp = head;
    int con = 0;
    if(abs(n-c) == 0)
    {
        head = head -> next;
        return head;
    }
    while(temp != NULL)
    {
        con ++;
        if(con == abs(n-c))
            break;
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
        

}
