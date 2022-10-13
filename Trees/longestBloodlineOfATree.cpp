#include<bits/stdc++.h>
using namespace std;
int max = 0;
int ssum = 0;
int bloodline(TreeNode* node,int sum,int cnt){
    if(node==NULL)
        return 0;
    if(node->left==NULL&&node->right==NULL){
        if(max<c=nt){
            max = cnt;
            ssum = sum;
        }
    }
    bloodline(node->left,sum+node->val,cnt+1);
    bloodline(node->right,sum+node->val,cnt+1);
}