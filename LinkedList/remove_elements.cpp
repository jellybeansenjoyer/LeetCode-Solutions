#include<bits/stdc++.h>
using namespace std;
ListNode* removeElements(ListNode* head, int val) {
    ListNode* f = head;
    ListNode* b = NULL;
    while(f!=NULL)
    {
        if(f->val==val){
        if(b==NULL){
            if(head==NULL)
                break;
            head = head->next;
            f =f->next;
            continue;
        }else{
            b->next = f->next;
        }
        }
        b = f;
        f = f->next;
    }
    return head;     
}
