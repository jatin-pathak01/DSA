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
        if(head==NULL||head->next==NULL||k==0){
            return head;
        }

        ListNode* tail=head;
        int length=1;
        while(tail->next!=NULL){
            tail=tail->next;
            length++;
        }

        k=k%length;
        if(k==0){
            return head;
        }
        tail->next = head;

        ListNode* jatin=head;
        for(int i=1;i<length-k;i++){
            jatin=jatin->next;
        }

        ListNode* newhead=jatin->next;
        jatin->next=NULL;
        
        return newhead;
    }
};