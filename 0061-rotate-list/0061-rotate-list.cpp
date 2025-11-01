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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp =head;
        if(!head || !head->next  ) return head;
        int len =1;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        k=k%len;
        if(k==0) return head;
        int count =len-k-1;
        ListNode* pivot =head;
        while(count--){
           if(pivot && pivot->next) pivot=pivot->next;
        }
        ListNode* ans= pivot->next;
        pivot->next=nullptr;
         temp->next=head;
         return ans;
    }
};