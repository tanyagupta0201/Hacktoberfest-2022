/*
    Author's Name: Aman Ali Siddiqui
    Author's Git Username: a-ma-n
    Date Modified: 02-10-2022
*/
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
        ListNode* p1=head;
        ListNode* p2=head;
        
        for(int i=0;i<n;i++){
            if(p2->next==NULL){
                return head->next;
            }
            p2=p2->next;
        }
        while(p2->next!=NULL){
            p2=p2->next;
            p1=p1->next;
        }
        p1->next=p1->next->next;
        return head;
    }
};
