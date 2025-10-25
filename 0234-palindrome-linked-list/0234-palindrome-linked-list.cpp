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
    bool isPalindrome(ListNode* head) {
        ListNode* front =head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* stop;
        while(fast!=NULL && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        if (fast != nullptr) slow = slow->next;
        ListNode* temp=slow;
        ListNode* prev=nullptr;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        temp=prev;
        ListNode* start=head;
        while(temp!=NULL){
            if(temp->val!=start->val) return false;
            temp=temp->next;
            start=start->next;
        }return true;
    }
};