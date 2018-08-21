#include<iostream>
#include "BinaryTreeNode.h"
#include<queue>
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

void printTreeLevelWise(BinaryTreeNode<int>* root){
    if (root == NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front();
        cout<<front->data<<" : ";
        pendingNodes.pop();
        if(front->left!=NULL){
            cout<<" L "<<front->left->data;
            pendingNodes.push(front->left);
        }
        if(front->right!=NULL){
            cout<<" L "<<front->right->data;
            pendingNodes.push(front->right);
        }
        cout<<endl;
    }
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

BinaryTreeNode<int>* takeInputLevelWise(){
    int rootData;
    
    cout<<"Enter root data";
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    
    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int leftData;
        int rightData;
        
        cout<<"Enter left child of "<<front->data<<endl;
        cin>>leftData;

        if(leftData!=-1){
            BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftData);
            front->left = leftChild;
            pendingNodes.push(leftChild);
        }
        cout<<"Enter right child of "<<front->data<<endl;
        cin>>rightData;

        if(rightData!=-1){
            BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightData);
            front->right = rightChild;
            pendingNodes.push(rightChild);
        }
    }
    return root;
}

int main(){
    // BinaryTreeNode<int>* rootNode = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(3);

    // rootNode->left = leftNode;
    // rootNode->right = rightNode;
    BinaryTreeNode<int>* rootNode = takeInputLevelWise();

    printTreeLevelWise(rootNode);
    delete rootNode;

    return 0;
}