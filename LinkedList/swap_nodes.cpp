#include<bits/stdc++.h>
using namespace std;
ListNode* swapNodes(ListNode* head, int k) {
    ListNode* f = head;
    int cnt = 0;
    while(f!=NULL){
        cnt++;
        f=f->next;
    }        
    ListNode* first = head;
    int i = 0;
    ListNode* v1,v2;
    while(i<=cnt-k){
        i++;
        if(i==cnt-k+1){
            v2 = first;
        }
        if(i==k){
            v1 = first;
        }
        first=first->next;
    }
    int temp = v1->val;
    v1->val = v2->val;
    v2->val = temp;
    return head;
}