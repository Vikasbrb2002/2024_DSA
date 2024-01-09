#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
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
void store_leaf2(TreeNode *root2, vector<int> &second)
{

    if (root2 == NULL)
        return;
    if (root2->left == NULL && root2->right == NULL)
    {
        second.push_back(root2->val);
        return;
    }
    if (root2->left)
        store_leaf2(root2->left, second);
    if (root2->right)
        store_leaf2(root2->right, second);
}
bool leafSimilar(TreeNode *root1, TreeNode *root2)
{
    vector<int> first;
    vector<int> second;
    store_leaf2(root1, second);
    store_leaf2(root2, second);
    if (first == second)
    {
        return true;
    }
    else
        return false;
}

int main()
{
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

    if (leafSimilar(root1, root2))
        cout << "similar";
    else
        cout << "not similar" << endl;

    return 0;
}