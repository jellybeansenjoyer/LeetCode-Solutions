#include<bits/stdc++.h>
using namespace std;
void deleteNode(ListNode* node) {
    //swap
    val temp = node->val;
    node->val = node->next->val;
    node->next->val = temp;
    //delete
    node->next =  node->next->next;        
}