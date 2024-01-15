#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data;
    node* left;
    node* right; 
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* BLT(){
    int data;
    cout<<"Enter the data: "<<" ";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    node* root=new node(data);
    
    cout<<"Enter the data for the left part of "<<data<< " node"<<endl;
    root->left=BLT();

    cout<<"Enter the data for the right part of "<<data<< " node"<<endl;
        root->right=BLT();

        return root;

    
}

// LEVEL ORDER TRAVERSAL FROM ROOT TO LEAF  

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        // step A
        node* temp=q.front();
        
        // step B 
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
       else{
        // step C
        cout<<temp->data<<" ";

        // step D
        if(temp->left)
        q.push(temp->left);

        if(temp->right)
        q.push(temp->right);
       
       }
    }
}

//  INORDER TRAVERSAL FROM ROOT TO LEAF 
void InOrderTraversal(node* root){
    if(root==NULL) return ;
    InOrderTraversal(root->left);
    cout<<root->data<<" ";
    InOrderTraversal(root->right);
}

// PREORDER TRAVERSAL FROM ROOT TO LEAF 

void Pre_Order_Traversal(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    Pre_Order_Traversal(root->left);
    Pre_Order_Traversal(root->right);
}

// POST ORDER TRAVERSAL FROM ROOT TO LEAF
void Post_order_Traversal(node* root){
    if(root==NULL) return;
    // LRN
    Post_order_Traversal(root->left);
    Post_order_Traversal(root->right);
    cout<<root->data<<" ";
}
int main(){
  node* root=NULL;
  root=BLT();
  cout<<"Lever order Traversal : "<<endl;
  levelOrderTraversal(root);
  cout<<endl;
  cout<<"In Order Traversal : ";
  InOrderTraversal(root);
  cout<<endl;
  cout<<"Pre Order Traversal : ";
  Pre_Order_Traversal(root);
  cout<<endl;
  cout<<"Post order Traversal : ";
  Post_order_Traversal(root);
return 0;
}