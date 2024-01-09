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

void InOrderTraversal(TreeNode* root,vector<int> &store){
    if(root==NULL) return ;

    InOrderTraversal(root->left,store);
    store.push_back(root->val);
    InOrderTraversal(root->right,store);
}

int rangeSumBST(TreeNode* root, int low, int high) {
    vector<int> store;
    int sum=0;
    InOrderTraversal(root,store);
    sort(store.begin(),store.end());
    for(int i=0;i<store.size();i++){
        if(store[i]<=high && store[i]>=low){
            sum+=store[i];
        }
    }
    return sum;
}

int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(15);
    a->left = b;
    a->right = c;
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(7);
    b->left = d;
    b->right = e;
    TreeNode* f = new TreeNode(18);
    c->right = f;

    cout<<rangeSumBST(a,7,15);    
    return 0;
}