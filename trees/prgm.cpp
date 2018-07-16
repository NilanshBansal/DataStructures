#include <iostream>
#include<queue>
#include "treenode.h"
using namespace std;

Treenode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root Data: "<<endl;
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);
    queue<Treenode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        Treenode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter no of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childData;
            Treenode<int>* child = new Treenode<int>(childData);
            front->children.push_back(child); 
            pendingNodes.push(child);
        }
    }
    return root;
}

Treenode<int>* takeInput(){
    int rootData;
    cout<<"Enter Data: "<<endl;
    cin>>rootData;
    Treenode<int>* root = new Treenode<int>(rootData);

    int n;
    cout<<"Enter no of children of "<<rootData<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        Treenode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(Treenode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<< root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

void printTreeLevelWise(Treenode<int>* root){
    if(root == NULL){
        return;
    }
    queue<Treenode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        Treenode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            pendingNodes.push(front->children[i]);
            cout<<front->children[i]->data<<",";
        }
        cout<<endl;
    }
}

int numNodes(Treenode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans = 1;
    for(int i=0;i<root->children.size();i++){
        ans+= numNodes(root->children[i]);
    }
    return ans;
}

int height(Treenode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans = 1,maxHeight=0,temp;
    for (int i=0;i<root->children.size();i++){
        temp=height(root->children[i]);
        if(temp>=maxHeight){
            maxHeight=temp;
        }
    }
    return ans+maxHeight;
}

void printAtLevelK(Treenode<int>* root,int k){
    if(root == NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for (int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }    
}

int numofLeafNodes(Treenode<int>* root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+=numofLeafNodes(root->children[i]);
    }
    return ans;
}

void postOrderTraversal(Treenode<int>* root){
    if(root==NULL){
        return ;
    }
    for(int i=0;i<root->children.size();i++){
        postOrderTraversal(root->children[i]);
    }

    cout<<root->data;
}

void deleteTree(Treenode<int>* root){
    for(int i=0;i<root->children.size();i++){
        deleteTree(root->children[i]);
    }    
    delete root;
}

int main(){
    // Treenode<int>* root = new Treenode<int>(1);
    // Treenode<int>* node1 = new Treenode<int>(2);
    // Treenode<int>* node2 = new Treenode<int>(3);

    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // Treenode<int>* root = takeInput();
    Treenode<int>* root = takeInputLevelWise();
    printTreeLevelWise(root);
    // printTree(root);
    cout<<"No of nodes: "<<numNodes(root);
    cout<<"Height of tree: "<<height(root);
    cout<<"No of leaf nodes: "<<numofLeafNodes(root);
    cout<<"\n post order traversal: "<<endl;
    postOrderTraversal(root);
    //deleteTree(root);
    delete root;
    return 0;
}