#include<bits/stdc++.h>
using namespace std;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    while(headA!=NULL){
        headA->val=-9999;
        headA=headA->next;
    }
    while(headB!=NULL){
        if(headB->val==-9999){
            return headB;
        }
        headB = headB->next;
    }
    return false;
}