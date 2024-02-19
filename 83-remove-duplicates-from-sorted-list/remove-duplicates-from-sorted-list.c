/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/*struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode *cur = head;
    struct ListNode *temp = NULL;
    struct ListNode *prev = NULL;
    while(cur!= NULL && cur->next != NULL){
        if (cur->val == (cur->next)->val){
            temp = cur->next;
            while(temp!= NULL && temp->next != NULL && cur->val == temp->next->val){
                if(temp->next->next != NULL )temp = temp->next->next;
                else temp = NULL;
            }
            if(temp!=NULL && temp->next != NULL){
                cur->next = temp->next;
            }else{
                cur->next = NULL;
            }
            
        }
        prev = cur;
        cur = cur->next;
    
        }
    }
    

    return head;
}*/

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *cur=head; //i+1
    struct ListNode *temp;  //i
    if(head==NULL) return head;

    int i;
    for(i=0;i<5;i++)
    {while(cur->next!=NULL)
    {
        temp = cur;
        cur = cur->next;
        if(temp->val == cur->val)   //if i == i+1
        {
            temp->next = cur->next;
        }
    }
    cur = head; //reset pointer back to start to check again
}
    return head;
}