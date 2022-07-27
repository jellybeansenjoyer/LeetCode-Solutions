#include<bits/stdc++.h>
using namespace std;
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp = head;
    if(temp==NULL)
        return head;
    while(temp->next!=NULL){
        if(temp->val==temp->next->val){
            temp->next = temp->next->next;
            continue;
        }
        temp = temp->next;
    }        
    return head;
    }
}