#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int getDecimalValues(ListNode* head)
{
    int num=0;
    stack<int> st;
    int cnt=0;
    ListNode* f = head;    
    while(f->next){
        st.push(f->val);
        f = f->next;
    }
    while(!st.empty())
    {
        num+=st.top()*pow(2,cnt++);
    }
    return num;
}
