#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
template <typename T>
void printTree(BinaryTreeNode<T>* root){
    if (root == NULL){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left != NULL){
        cout<<" L "<<root->left->data;
    }
    if(root->right != NULL){
        cout<<" R "<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*left = takeInput();
    BinaryTreeNode<int>*right = takeInput();

    root->left = left;
    root->right = right;

    return root;
}


int main(){
    // BinaryTreeNode<int>* rootNode = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(3);

    // rootNode->left = leftNode;
    // rootNode->right = rightNode;
    BinaryTreeNode<int>* rootNode = takeInput();

    printTree(rootNode);
    delete rootNode;

    return 0;
}