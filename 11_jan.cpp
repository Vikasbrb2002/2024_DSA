#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
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
    void checkFor(TreeNode* root,int mini,int maxi,int &result){
        if(root==NULL){
            return;
        }
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        checkFor(root->left,mini,maxi,result);
        checkFor(root->right,mini,maxi,result);
            result = max(result,abs(maxi-mini));
    }
    int maxAncestorDiff(TreeNode* root) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int result=INT_MIN;
        checkFor(root,mini,maxi,result);
        return result;
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
    
    cout<<maxAncestorDiff(a);



return 0;
}