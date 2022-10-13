#include<bits/stc++.h>
using namespace std;
 vector<int> v;
void findNextMin(TreeNode* root)
{
    if(root==NULL)
    return;
    v.push_back(root->val);
    findNextMin(root->left);
    findNextMin(root->right);
}
int findSecondMinimumValue(TreeNode* root)
{
    findNextMin(root);
    sort(v.begin(),v.end());
    int s = -1;
    for(int i =0;i<v.size()-1;i++)
    {
        if(v[i]==v[i+1])
            continue;
        s= v[i+1]; 
        break;
    }
    return s;
}
