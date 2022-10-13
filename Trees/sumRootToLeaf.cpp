#include<bits/stdc++.h>
using namespace  std;
vector<int> v;
int sumRootToLeaf(TreeNode* root) {
    sumBinary(root,0)
    int sum = 0;
    for(int i =0;i<v.size();i++){
        v[i] = convertTODecimal(v[i]);
        sum+= v[i];
    }
    return sum;
}
int convertTODecimal(int n)
{
    int sum = 0;
    int cnt=0;
    while(n>0){
        int rem  =  n%2;
        sum+=pow(10,cnt++)*rem;
        n=n/2;
    }
    return sum;
}
int sumBinary(TreeNode*root , int num)
{
    if(root==NULL)
    {
        c
        v.push_back(num)
    }
    sumBinary(root->left,num*10+root->val);
    sumBinary(root->right,num*10+root->val);
}