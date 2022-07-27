#include<bits/stdc++.h>
using namespace std;
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* f1 = list1;
            ListNode* f2 = list2;
            ListNode* res=NULL;
            ListNode* result;
            ListNode* temp;
    if(f1==NULL)
        return f2;
    if(f2==NULL)
        return f1;
    while(f1!=NULL&&f2!=NULL){
        if(f1->val<f2->val){
            temp = f1;
            f1 = f1->next;
            temp->next = NULL;
            if(res==NULL){
                res =temp;
                result = res;
            }
            else{
                res->next = temp;   
                res = res->next;
            }
        }else{
            temp = f2;
            f2 = f2->next;
            temp->next = NULL;
            if(res==NULL){
                res = temp;
                result = res;
            }
            else{
                  res->next = temp;
                  res = res->next;
            } 
        }
    }
    while(f1!=NULL){
        res->next =f1;
        res = res->next;
        f1 = f1->next;
    }   
    while(f2!=NULL){
        res->next = f2;
        res =res->next;
        f2 = f2->next;
    } 
    return result;
    }
