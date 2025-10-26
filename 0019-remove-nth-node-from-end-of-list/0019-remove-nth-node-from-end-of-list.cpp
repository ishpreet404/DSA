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
        ListNode* temp =head;
        if(head==NULL || head->next==NULL) return NULL;
        int count=0;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        count=count-n;
        if(count==-1){
            ListNode* newh =head;
            newh=head->next;
            return newh;
        }
        temp=head;
        remove(temp,count,head);
        return head;

    }
    void remove(ListNode*& temp,int count,ListNode*& head){
        while( temp->next!=NULL && count>0){
            temp=temp->next;
            count--;
        }
        if(temp!=NULL && temp->next!=NULL) temp->next=temp->next->next;
    }
};