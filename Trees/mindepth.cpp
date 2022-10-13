#include<bits/stdc++.h>
using namespace std;
int min_depth=-1;
void depth(TreeNode* root, int lvl)
{
    if(root==NULL)
        return;
    if(root->left==NULL&&root->right==NULL)
    {
        if(min_depth==-1)
        {
            min_depth = lvl;
        }else
            min_depth = min(lvl,min_depth);
    }
    depth(root->left,++lvl);
    depth(root->right,lvl++);
}    
int minDepth(TreeNode* root){
    if(root==NULL)
    return 0;
    depth(root,1);
    return min_depth;
}