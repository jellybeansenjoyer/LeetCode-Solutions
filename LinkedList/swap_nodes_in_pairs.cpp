#include<bits/stdc++.h>
using namespace std;
    ListNode* swapPairs(ListNode* head) {
    ListNode* first= head;
    while(first!=NULL&&first->next!=NULL){
        int temp = first->val;
        first->val = first->next->val;
        first->next->val = temp;
        first = first->next->next;
    }
        return head;
    }        
}