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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* from_start = head;
        ListNode* dummy = head;
        ListNode* from_end = head;

        for(int i=1; i<k; i++){
            dummy=dummy->next;
        }
        from_start=dummy;
        
        while(dummy->next){
            dummy=dummy->next;
            from_end=from_end->next;
        }

        int temp = from_start->val;
        from_start->val = from_end->val;
        from_end->val = temp;


        return head;

    }
};