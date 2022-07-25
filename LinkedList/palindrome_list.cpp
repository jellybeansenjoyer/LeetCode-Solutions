#include<bits/stdc++.h>
using namespace std;
  bool isPalindrome(ListNode* head) {
    ListNode* first = head;   
    stack<int> stack;
    int cnt = 0;
    while(first!=NULL){
        cnt++;
        first = first->next;
    }
    int i =0;
    ListNode* f2 = head;
    while(f2!=NULL){
        if(i<cnt/2){
            stack.push(f2->val);
        }else{
            if(i!=cnt/2 || cnt%2==0)
                if(f2->val!=stack.top()){
                    stack.pop();
                    return false;
            }else 
                    stack.pop();
        }
            i++;
            f2 = f2->next;
    }
    if(stack.empty()||(cnt==1))
    return true;
    else 
    return false;
}
