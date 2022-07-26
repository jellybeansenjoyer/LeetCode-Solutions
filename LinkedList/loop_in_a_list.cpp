#include<bits/stdc++.h>
using namespace std;
    bool hasCycle(ListNode *head) {
        ListNode* f = head;
        while(f!=NULL){
            if(f->val==-9999)
                return true;
            f->val= -9999;
            f = f->next;
        }
        return false;
    }