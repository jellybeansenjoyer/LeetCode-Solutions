#include<bits/stdc+++.h>
using namespace std;
int d =1;
bool isBalanced(TreeNode* root) {
    call(root,0);
    if(d)
        return true;
    else    
        return false;        
}
int call(TreeNode* root, int lvl)
{
    if(root==NULL)
        return 0;
    int l = call(root->left,lvl);
    int r = call(root->right,lvl);
    if(abs(l-r)<=1)
        d=d*1;
    else 
        d=d*0;
    return max(l,r)+1;
}