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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;  //save the first even node

        while(even && even->next){
            odd->next = even->next; //connect odd to next odd
            even->next=even->next->next; //go to next even
            odd=odd->next;
            even=even->next;
        }

        odd->next = evenHead;

        return head;

    }
};