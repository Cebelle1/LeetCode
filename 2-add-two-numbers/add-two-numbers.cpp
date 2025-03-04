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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       // Create a new linked list to store result in
       ListNode* calc = new ListNode(0); //init as 0
       ListNode* header = calc; //Header to point to calc linked list

        int carry = 0; // Create a carry variable to account for carry over

       // Loop through the non-empty linked lists
       // & Loop when carry not 0 to continue adding
       while(l1 != nullptr || l2 != nullptr || carry != 0){

            int sum = carry;

            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum/10;
            header->next = new ListNode(sum % 10);
            header = header->next;

       }

       ListNode* result = calc->next;
       return result;
    }
};