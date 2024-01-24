#include<bits/stdc++.h>
using namespace std;

class TreeNode {

    
    public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        this->val = 0;
        this->left = NULL;
        this->right = NULL;
    }
    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
    void prepList(unordered_map<int ,set<int> > &adjList,TreeNode* root){
        if(!root) return ;
        if(root->left){
            adjList[root->val].insert(root->left->val);
            adjList[root->left->val].insert(root->val);
        }
         if(root->right){
            adjList[root->val].insert(root->right->val);
            adjList[root->right->val].insert(root->val);
        }
        prepList(adjList,root->left);
        prepList(adjList,root->right);
        
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int ,set<int> > adjList;
        int ans=0;
        prepList(adjList,root);
        
        unordered_map<int,bool> visit;
        queue<pair<int,int> > q;
        q.push({start,0});
        visit[start]=true;
        while(!q.empty()){
           auto qvalue= q.front();
           q.pop();
           int currvalue=qvalue.first;
           int time=qvalue.second;
           visit[currvalue]=true;
           ans=max(ans,time);
           for(auto ListValue:adjList[currvalue]){
               if(visit[ListValue]==false) q.push({ListValue,time+1});
           }
        }

    return ans;
    }

int main(){
    TreeNode* a = new TreeNode(10);
    TreeNode* b = new TreeNode(5);
    TreeNode* c = new TreeNode(3);
    a->left = b;
    a->right = c;
    TreeNode* d = new TreeNode(10);
    TreeNode* e = new TreeNode(6);
    c->left = d;
    c->right = e;
    TreeNode* f = new TreeNode(4);
    b->right=f;
    TreeNode* g = new TreeNode(9);
    TreeNode* h = new TreeNode(2);
    f->right = h;
    f->left =g;
    cout<<amountOfTime(a,3);

return 0;
}