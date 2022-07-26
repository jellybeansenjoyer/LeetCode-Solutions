#include<bits/stdc++.h>
using namespace std;
ListNode* rotateRight(ListNode* head, int k) {
    ListNode* f = head;
    int cnt =0;
    while(f!=NULL){
        cnt++;
        f = f->next;
    }       
    int i =0;
    ListNode* back;
    ListNode* temp = head;;    while(i!=cnt-k){
        i++;
        temp = temp->next;
        back = temp;
    }
    ListNode* liste = temp;
    while(temp->next!=NULL)
        temp = temp->next;
    temp->next = back;
     return liste;
}