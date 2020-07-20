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
    ListNode* removeElements(ListNode* head, int val) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        while(head && head->val==val){
            head=head->next;
        }
        if(head==NULL) return NULL;
        ListNode* curr=head->next;
        ListNode* prev=head;
        while(curr!=NULL){
            if(curr->val==val){
                    prev->next=curr->next;
            }else
                prev=curr;
            curr=curr->next;
        }
        return head;
    }
};