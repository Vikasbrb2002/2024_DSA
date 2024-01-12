#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        this->val=0;
        this->left=NULL;
        this->right=NULL;
    }
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
 int height(TreeNode * root){
        if(root==NULL) return 0;
        
        int Lh=height(root->left);
        int rh= height(root->right);
        int ans=max(Lh,rh)+1;
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        bool ans1;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(abs(leftHeight-rightHeight)<=1)
        ans1=true;
        else ans1=false;

        bool leftAns=isBalanced(root->left);
       bool rightAns= isBalanced(root->right);
       if(ans1 && leftAns && rightAns) return true;
       else return false;
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
    if(isBalanced(a)){
        cout<<"True"<<endl;
    }
    else cout<<"False"<<endl;

return 0;
}