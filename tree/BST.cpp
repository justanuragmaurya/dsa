// You are using GCC
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left=right=nullptr;
    }
};

Node* insert(Node* root , int val){
    if(root==nullptr){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left,val);
    }else if(val > root->data){
        root->right = insert(root->right,val);
    }
    return root;
}

void po(Node* root){
    if(root==nullptr){
        return;
    }
    po(root->left);
    po(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = nullptr;
    int data;
    
    while(cin>>data && data!=-1){
        root = insert(root,data);
    }
    
    po(root);
    return 0;
}