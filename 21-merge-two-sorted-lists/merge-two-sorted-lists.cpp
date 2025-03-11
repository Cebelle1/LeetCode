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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* resultHead = new ListNode();
        ListNode* result = resultHead;

        ListNode* curHead1 = list1;
        ListNode* curHead2 = list2;

        while(curHead1 && curHead2){
            //std::cout << "cur1= " << curHead1->val << std::endl;
            //std::cout << "cur2= " << curHead2->val << std::endl;
            if(curHead1->val < curHead2->val){
                result->next = curHead1;
                curHead1 = curHead1->next;
                
            }else{
                result->next = curHead2;
                curHead2 = curHead2->next;
            }
        
            result = result->next;
            std::cout<< "result " << result->val << std::endl;
        }

        if(curHead1){
            result->next = curHead1;
        }
        if(curHead2){
            result->next = curHead2;
        }
        resultHead = resultHead->next;
        return resultHead;

    }
};