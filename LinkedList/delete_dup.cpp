#include<bits/stdc++.h>
using namespace std;
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp;
    while(temp->next){
        if(temp->val==temp->next->val){
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }        
    return head;
}