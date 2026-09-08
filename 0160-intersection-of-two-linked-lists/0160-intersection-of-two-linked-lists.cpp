/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int counta = 0;
        int countb=0;
        int d;
        ListNode *A = headA;
        ListNode *B = headB;
        while(A!= NULL){
            counta++;
            A=A->next;
        }
        while(B!= NULL){
            countb++;
            B=B->next;
        }  A = headA;
           B = headB;
         int count = 0;
        if(counta >= countb){
            d = counta - countb;
            while(count != d){
                count++;
                A = A->next;
            } }
            else if(counta < countb){
            d = countb - counta;
            while(count != d){
                count++;
                B = B->next;
            }
        } while(A!=B){
           A=A->next;
           B=B->next;
        } return A;
    }
};