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
            cout<<" R "<<front->right->data;
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

int countNodes(BinaryTreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right); 
}

void inorder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

BinaryTreeNode<int>* buildTreeInPreHelper(int* in,int* pre,int inS,int inE,int preS,int preE){
    if(inS > inE){
        return NULL;
    }

    int rootData = pre[preS];

    int lPreS = preS + 1;
    int lInS = inS;
    int rPreE = preE;
    int rInE = inE;

    int rootIndex = -1;
    
    for(int i = inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }
    int lInE = rootIndex - 1;
    
    int lPreE = lInE - lInS + lPreS;
    
    int rPreS = lPreE + 1;
    
    int rInS = rootIndex + 1;
    

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeInPreHelper(in,pre,lInS,lInE,lPreS,lPreE);
    root->right = buildTreeInPreHelper(in,pre,rInS,rInE,rPreS,rPreE);
    return root;
}

BinaryTreeNode<int>* buildTreeInPre(int* in,int* pre,int size){
    return buildTreeInPreHelper(in,pre,0,size-1,0,size-1);
}

BinaryTreeNode<int>* buildTreeInPostHelper(int* in,int* post,int inS,int inE,int postS,int postE){
    if(inS > inE){
        return NULL;
    }

    int rootData = post[postE];

    int lInS = inS;
    int lPostS = postS;
    int rPostE = postE - 1;
    int rInE = inE;

    
    int rootIndex = -1;

    for(int i = inS;i<=inE;i++){
        if(in[i]==rootData){
            rootIndex=i;
            break;
        }
    }

    int lInE = rootIndex - 1;

    int rInS = rootIndex + 1;
    int lPostE = lInE - lInS + lPostS;

    int rPostS = lPostE + 1;
    

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = buildTreeInPostHelper(in,post,lInS,lInE,lPostS,lPostE);
    root->right = buildTreeInPostHelper(in,post,rInS,rInE,rPostS,rPostE);
    return root;
}

BinaryTreeNode<int>* buildTreeInPost(int* in,int* post,int size){
    return buildTreeInPostHelper(in,post,0,size-1,0,size-1);
}
int height(BinaryTreeNode<int>* root){
    if(root == NULL){
        return  0;
    }
    return 1 + max(height(root->left),height(root->right));
}

int diameter(BinaryTreeNode<int>* root){
    if(root == NULL){
        return  0;
    }

    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);

    return max (option1,max(option2,option3));

}

pair<int,int> heightdiameterOptimised(BinaryTreeNode<int>* root){
    if(root == NULL){
        pair<int,int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }

    pair<int,int>leftAns = heightdiameterOptimised(root->left);
    pair<int,int>rightAns = heightdiameterOptimised(root->right);

    int ld = leftAns.second;
    int lh = leftAns.first;
    int rd = rightAns.second;
    int rh = rightAns.first;

    int height = 1 + max(lh,rh);
    int diameter = max(lh + rh,max(ld,rd));

    pair<int,int> p;
    p.first = height;
    p.second = diameter;

    return p;
}

int main(){
    // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
    // BinaryTreeNode<int>* rootNode = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(3);

    // rootNode->left = leftNode;
    // rootNode->right = rightNode;
    

    /* BinaryTreeNode<int>* rootNode = takeInputLevelWise();
    cout<<"\nNo of nodes: "<<countNodes(rootNode)<<endl;
    printTreeLevelWise(rootNode);
    cout<<endl<<"Printing Inorder: "<<endl;
    inorder(rootNode);
    delete rootNode; */

    // int in[] = {4,2,5,1,8,6,9,3,7};
    // int post[] = {4,5,2,8,9,6,7,3,1};
    // int pre[] = {1,2,4,5,3,6,8,9,7};
    // BinaryTreeNode<int>* root = buildTreeInPre(in,pre,9);

    BinaryTreeNode<int>* root = takeInputLevelWise();
    printTreeLevelWise(root);
    cout<<endl;
    pair<int,int> p = heightdiameterOptimised(root);
    cout<<"Height: "<<p.first<<endl;
    cout<<"Diameter: "<<p.second<<endl;
    delete root;
    return 0;
}