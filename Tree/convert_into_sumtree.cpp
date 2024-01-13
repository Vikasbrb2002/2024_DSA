#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
  int sumTree(TreeNode* root){
    if(root==NULL) return 0;

    int leftAns=sumTree(root->left);
    int rightAns=sumTree(root->right);
    root->val=leftAns+rightAns+root->val;
    return root->val;
}
int main(){
    TreeNode* a= new TreeNode(8);
    TreeNode* b= new TreeNode(3);
    TreeNode* c= new TreeNode(10);
    a->left=b;
    a->right=c;

    TreeNode* d= new TreeNode(1);
    TreeNode* e= new TreeNode(6);
    b->left=d;
    b->right=e;
    TreeNode* f= new TreeNode(14);
    c->right=f;
    TreeNode* g= new TreeNode(4);
    e->right=g;
    TreeNode* h= new TreeNode(7);
    e->left=h;
    TreeNode* i= new TreeNode(13);
    f->right=i;
    cout<<sumTree(a)<<" ";

return 0;
}