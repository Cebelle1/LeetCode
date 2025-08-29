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
#include <cmath>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Add them node by node and do carry over
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        int total =0, carry =0;

        while(l1 || l2 || carry){
            if(l1){
                total+=l1->val;
                l1=l1->next;
            }

            if(l2){
                total+= l2->val;
                l2=l2->next;
            }
            int num = total%10; //get the ones place
            carry = total/10;
            ListNode* newNode = new ListNode(num);
            dummy->next = newNode;
            dummy=dummy->next;
            total = carry;
        }
        res=res->next;
        return res;
    }
};