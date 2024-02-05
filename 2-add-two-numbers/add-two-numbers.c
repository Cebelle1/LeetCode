/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ans = malloc(sizeof(struct ListNode));
    struct ListNode *cur = malloc(sizeof(struct ListNode));
    int carry = 0;
    cur = ans;

    //this method is like the written working way
    //add the least significant number, if exceed 10, carry 1 over to the next number
    while(l1!=NULL || l2!=NULL || carry ==1){
        int sum =0;
        if(l1 != NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL){
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum/10;     //msb of added
        cur->next = malloc(sizeof(struct ListNode));
        cur->next->val = sum%10;    //lsb of added
        cur->next->next = NULL;
        cur = cur->next;
    }
    return ans->next;
}
/*struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ans = malloc(sizeof(struct ListNode));
    struct ListNode *cur = malloc(sizeof(struct ListNode));     
    struct ListNode *newNode;

    //new algo idea: if length of divide the input into sections, take only
    unsigned long num1 = (l1==NULL)?0:l1->val;
    l1= l1->next;
    unsigned long num2 = (l2==NULL)?0:l2->val;
    l2 = l2->next;
    unsigned long temp1, temp2;

    for(unsigned long i=10; l1!=NULL; i*=10){ //pow()
        temp1 = l1->val;
        num1 = num1 + temp1*i;
        l1=l1->next;
    }

    for(unsigned long i=10; l2 != NULL; i*=10){   //pow()
        temp2 = l2->val;
        num2 = num2 + temp2*i;  
        l2 = l2->next;
    }
    
    num1 = num1 + num2;     //reuse num1 to save space

    ans->val = num1%10; //list head
    ans->next = NULL; 
    cur = ans;
    num1 = num1/10;
    
    while(num1 > 0){
        newNode = malloc(sizeof(struct ListNode));  
        newNode->val = num1%10;
        newNode->next = NULL;
        cur->next = newNode;
        cur = cur->next;
        num1 = num1/10;
    }
    return ans;
}*/
