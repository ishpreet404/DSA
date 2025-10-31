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
        int carry =0;
        ListNode* dummy = new ListNode(-1);
        ListNode* temp=dummy;
        while(l1 || l2){
            int sum = carry;
            if(l1) sum=sum+l1->val;
            if(l2) sum=sum+l2->val;
            ListNode* newNode = new ListNode(sum%10);
            carry=sum/10;
            temp->next=newNode;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
           
            temp=temp->next;
        }
         if(carry){
                ListNode* cN = new ListNode(carry);
                temp->next=cN;
            }
            return dummy->next;
    }
};