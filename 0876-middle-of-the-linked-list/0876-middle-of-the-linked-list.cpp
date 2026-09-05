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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        int ncount = 0;

        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* node = head;
        while(node != NULL){
            count++;
            node = node->next;
        } 

        node=head;
        while(node != NULL){ 
            if(ncount == count/2){
                return node;
                break;
            } 
            ncount++;
            node = node->next;
        } return NULL;
    }
};