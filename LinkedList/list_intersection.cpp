#include<bits/stdc++.h>
using namespace std;
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<int> v1,v2;
        ListNode* f1 = headA,f2 = headB;
        while(f1!=NULL){
            v1.push_back(f1->val)
            f1 = f1->next;
        }
        while(f2!=NULL){
            v2.push_back(f2->val)
            f2=f2->next;
        }    
        sort(v1.begin(),v1.end(),greater<int>())
        sort(v2.begin(),v2.end(),greater<int>())
        for(auto i = v1.begin(),j = v2.begin();i!=v1.end(),j!=v2.end();i++,h++){
            if(*i!=*j)
                break;
        }
        if(i==v1.begin()){
            
        }
}