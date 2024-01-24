#include<bits/stdc++.h>
using namespace std;
int result=0;
class TreeNode {

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
    bool ispalindrome(vector<int> &arr){
        int odd=0;
        for(int i=1;i<=9;i++){
            if(arr[i]%2!=0) odd++;
        }
        if(odd>1) return false;
        return true;
    }
     void dfs(TreeNode* root,vector<int>& arr){
        if(root==NULL) return;
        arr[root->val]++;
        if(root->left==NULL && root->right ==NULL) {
            if(ispalindrome(arr)){
                result++;
            }
        }else{
        dfs(root->left,arr);
        dfs(root->right,arr);
        }
        arr[root->val]--;
    }
    
   

 int pseudoPalindromicPaths (TreeNode* root) {
        // int arr=new arr[10];
        // int result=0;
        vector<int> arr(10);
        dfs(root,arr);
        return result;
    }
int main(){
 TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(1);
    a->left = b;
    a->right = c;
    TreeNode* d = new TreeNode(3);
    TreeNode* e = new TreeNode(1);
    b->left = d;
    b->right = e;
    TreeNode* f = new TreeNode(1);
    b->right=f;
    // TreeNode obj;
    cout<<pseudoPalindromicPaths(a)<<endl;
return 0;
}