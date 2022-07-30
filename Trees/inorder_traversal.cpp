#include<bits/stdc++.h>
using namespace std;
vector<int> traversal;        
vector<int> inorderTraversal(TreeNode* root) {
    if(root!=NULL){
        inorderTraversal(root->left);
        traversal.push_back(root->val);
        inorderTraversal(root->right); 
    }
    return traversal;
}