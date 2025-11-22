#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Node{
    public:
    int val;
    Node *left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
static int i=-1;
Node * buildtree(vector<int>preorder){
    i++;
    if(preorder[i]==-1){
        return NULL;
    }
    Node *root=new Node(preorder[i]);
    root->left=buildtree(preorder);
    root->right=buildtree(preorder);
    return root;

}
void preorderTraverse(Node* root){
    if(root==NULL){
        return;
    }
    
    preorderTraverse(root->left);
    preorderTraverse(root->right);cout<<root->val<<" ";

}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root= buildtree(preorder);
    preorderTraverse(root);

}