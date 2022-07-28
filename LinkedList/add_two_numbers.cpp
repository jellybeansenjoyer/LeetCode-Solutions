#include<bits/stdc++.h>
using namespace std;
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* f1 = l1;
    ListNode* f2 = l2;
    ListNode* result = new ListNode();
    ListNode* f3 = result;
    int carry = 0,sum  =0;

    while(f1!=NULL&&f2!=NULL){
    sum = f1->val+f2->val+carry;
    carry = 0;
    if(sum>9){
        carry = sum/10;
        sum = sum%10;
    }
        result->next =  new ListNode(sum,NULL);
        result = result->next;
        f1 = f1->next;
        f2= f2->next;
    }
    while(f1!=NULL){
            sum = f1->val+carry;
            carry  = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
            result->next = new ListNode(sum,NULL);
            result = result->next;
        
        f1 = f1->next;
    }
    while(f2!=NULL){
            sum = f2->val+carry;
            carry  = 0;
            if(sum>9){
                carry = sum/10;
                sum = sum%10;
            }
        result->next = new ListNode(sum,NULL);
            result = result->next;
        f2 = f2->next;
    }
    if(carry){
        result->next = new ListNode(carry,NULL);
    }
    return f3->next;        
    }