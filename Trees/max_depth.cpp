#include<bits/stdc++.h>
using namespace std;
int maxDepth(TreeNode* root) {
    return depth(root,0);
}
int depth(TreeNode* root,int cnt){
    if(root!=NULL){
        cnt++;
        cnt = max(depth(root->left,cnt),depth(root->right,cnt));
    }
    return cnt;
}