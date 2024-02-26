#include<bits/stdc++.h>
using namespace std;

    class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(){
        this->val = 0;
        this->left = NULL;
        this->right = NULL;
    }
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(p && q){
            
            
            
            if(p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right))
            return true;
            
        }
        return false;
    }

int main(){
 TreeNode *root1 = new TreeNode(10);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(15);
    root1->left = b;
    root1->right = c;
    TreeNode *root2 = new TreeNode(3);
    TreeNode *d = new TreeNode(7);
    TreeNode *e = new TreeNode(7);
    root2->left = d;
    root2->right = e;
    TreeNode *f = new TreeNode(18);
    root2->right = f;
    cout<<isSameTree(root1,root2);
return 0;
}