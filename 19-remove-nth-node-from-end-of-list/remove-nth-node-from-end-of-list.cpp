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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        int indexFromStart = 0;
        while(cur != NULL){
            indexFromStart++;       //records the size of the ll
            cur = cur->next;
        }
        if(indexFromStart == 1 && n == 1){
            return NULL;
        }

        indexFromStart-=n;  // actual target from start
        std::cout << "index " << indexFromStart << std::endl;
        if(indexFromStart == 0){
            head=head->next;
            return head;
        }
        cur = head;
        
        for(int i=1; i<indexFromStart; i++){
            cur = cur->next;
        }

        std::cout << "target: "<< cur->val << std::endl;
        if(cur->next->next != NULL){
            cur->next = cur->next->next;
        }else{
            cur->next = NULL;
        }
        

        return head;
    }
};