#include<bits/stdc++.h>
using namspace std;
vector<int> v1,v2;
bool isSymmetric(TreeNode* root) {
    lrn(root);
    rln(root);
    return v1==v2;
}
void rln(TreeNode* node){
    if(node!=NULL){
        rln(node->right);
        rln(node->left);
        v1.push_back(node->val);
    }else{
        v1.push_back(-9999);
    }
}
void lrn(TreeNode* node){
    if(node!=NULL){
        lrn(node->left);
        lrn(node->right);
        v2.push_back(node->val);
    }else{
        v2.push_back(-9999);
    }
}
