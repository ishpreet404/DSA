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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert(nums[i]);
        }
        while(head && mp.find(head->val) != mp.end()) {
            head = head->next;
        }
        ListNode* temp = head;
        ListNode* prev=head;
        while(temp){
            if(mp.find(temp->val)!=mp.end()){
               prev->next=temp->next;
               temp=temp->next;
            }else{
            prev=temp;
            temp=temp->next;
            }
        }return head;

    }
};