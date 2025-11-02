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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp =head;
        ListNode* prev =NULL;
        while(temp!=nullptr){
            ListNode* kthNode = getKthNode(temp,k);
            if (!kthNode){
                if(prev){
                    prev->next=temp;
                }
                break;
            }
            ListNode* nextNode = kthNode->next;
            kthNode->next=NULL;
            reverseLL(temp);
            if(temp==head){
                head=kthNode;
            }else{
                prev->next=kthNode;
            }
            prev=temp;
            temp=nextNode;
        }return head;
        
    }
     ListNode* reverseLL(ListNode* head) {
        ListNode* temp = head ;
        ListNode* front = head ;
        ListNode* prev = NULL ;
        while(temp!=NULL){
          front=temp->next;
          temp->next=prev;
          prev=temp;
          temp=front;
        }return prev;  
    }
    ListNode* getKthNode(ListNode* node , int k ){
        ListNode* kt = node;
        k-=1;
        // int count =k;
        // int check =0;
        while(kt!=NULL&&k>0){
            kt=kt->next;
            k--;
        }return kt;
        }
    
};