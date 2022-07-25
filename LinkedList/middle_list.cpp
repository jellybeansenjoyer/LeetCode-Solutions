#include<bits/stdc++.h>
using namespace std;
    ListNode* middleNode(ListNode* head) {
      ListNode* first = head;
    int cnt = 0;
    while(first!=NULL){
        cnt++;
        first = first->next;
    }
    ListNode* f2 = head;
    int i = 0;
    while(i<cnt/2){
        i++;
        f2=f2->next;
    }
    return f2;      
    }