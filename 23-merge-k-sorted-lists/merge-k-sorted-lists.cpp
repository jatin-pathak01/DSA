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
    ListNode* mergetwolist(ListNode* list1,ListNode* list2){
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val<=list2->val){
            list1->next=mergetwolist(list1->next,list2);
            return list1;
        }
        else {
            list2->next=mergetwolist(list1,list2->next);
            return list2;
        }
        return NULL;
    }
    ListNode* partitionAndMerge(int start,int end,vector<ListNode*>&lists){
        if(start>end){
            return NULL;
        }
        if(start==end){
            return lists[start];
        }
        int mid=start+(end-start)/2;
        ListNode* L1= partitionAndMerge(start,mid,lists);
        ListNode* L2= partitionAndMerge(mid+1,end,lists);
        return mergetwolist(L1,L2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
            int size=lists.size();
            if(size==0){
                return NULL;
            }
            return partitionAndMerge(0,size-1,lists);
    }
};