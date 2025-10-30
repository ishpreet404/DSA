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
    ListNode* sortList(ListNode* head) {
       return MergeSort(head);
    }
    ListNode* MergeSort(ListNode* low){
        if(low==NULL || low->next==NULL) return low;
        ListNode* midNode=mid(low);
        ListNode* high=midNode->next;
        midNode->next=nullptr;
        ListNode* left = MergeSort(low);
        ListNode* right = MergeSort(high);
        return Merge(left, right);
    }
    ListNode* Merge(ListNode* l1, ListNode* l2) {
    ListNode dummy;
    ListNode* tail = &dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1 ? l1 : l2);
    return dummy.next;
}
    ListNode* mid(ListNode* node){
        ListNode* slow= node;
        ListNode* fast= node;
        fast=fast->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }return slow;
    }
};