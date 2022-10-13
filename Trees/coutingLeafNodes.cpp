#include<bits/stdc++.h>
using namespace std;
int cnt  =0;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderTraversal(node* root)
{
    cout<<"level order traversal"<<endl;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }else{  
            cout<<temp->data<<" ";
            if(temp->left)
            {
            q.push(temp->left);
            }
            if(temp->right)
            {
            q.push(temp->right);
            }
        }
        
    }
    cout<<endl;
}
node* createTree(node* tree)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data!=-1)
    tree = new node(data);
    else{
    return NULL;
    }

    cout<<"Enter the data for left node"<<endl;
    tree->left = createTree(tree->left);
    cout<<"Ente the data for right node"<<endl;
    tree->right = createTree(tree->right);

    return tree;
}
void countNodes(node* root)
{

    if(root->left== NULL && root->right==NULL)
    {
        cnt++;
        return;
    }
    countNodes(root->left);
    countNodes(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{   
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void inorder(node* root)
{
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
 int areEqualTrees(node* root1,node* root2)
    {
        if(root1==NULL&&root2==NULL)
            return 1;
        if(root1==NULL&&root2!=NULL)
            return 0;
        if(root1!=NULL&&root2==NULL)
            return 0;
        if(root1->data!=root2->data)
            return 0;
        return (areEqualTrees(root1->left,root2->left) && areEqualTrees(root1->right,root2->right));
    }

int height(node* root)
{
    if(root==NULL)
        return 0;
    
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}
bool isBalanced(node* root)
{
    if(root==NULL)
        return 1;
    
    int l = isBalanced(root->left);
    int r = isBalanced(root->right);
    int d = abs(height(root->left)-height(root->right))<=1;
    if(l&&r&&d)
        return true;
    else 
        return false;
}
pair<int,int> isSumTree(node* root)
{
    if(root==NULL){
        pair<int,int> p = make_pair(1,0);
        return p;
    }
    if(root->left==NULL&&root->right==NULL){
        pair<int,int> p = make_pair(1,root->data);
        return p;
    }
    
    pair l = isSumTree(root->left);
    pair r = isSumTree(root->right);

    int left = l.first;
    int right = r.first;
    int cond = l.second+r.second==root->data;

    pair<int,int> ans; 

    if(left && right && cond)
    {
        ans.first  = true;
        ans.second = 2*root->data;
    }
    else
        ans.first = false;

    return ans; 
}
void runner1()
{
    node* root =NULL;
    root = createTree(root);
    levelOrderTraversal(root);
    cout<<"number of leaf nodes"<<endl;
    countNodes(root);
    cout<<cnt<<endl;
    cout<<"inorder traversal"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal"<<endl;
    postorder(root);
    cout<<endl;
    int h = height(root);
    cout<<"height of the tree: "<<h<<endl;
    int check =isBalanced(root);
    cout<<"is Balanced "<<check<<endl;
    int check2 = isSumTree(root).first;
    cout<<"is SumTree "<<check2<<endl;
}
void runner2(){
    node* root1 = NULL;
    node* root2 = NULL;
    cout<<"Enter the tree 1"<<endl;
    root1 = createTree(root1);
    cout<<"Enter the tree 2"<<endl;
    root2 = createTree(root2);
    int result = areEqualTrees(root1,root2);
    if(result)
        cout<<true<<endl;
    else 
        cout<<false<<endl;
}
int main()
{
    runner1();
    // runner2();    
    return 0;
}
