Given Preorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.

Note: Assume binary tree contains only unique elements.

Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Pre order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :

12
1 2 3 4 15 5 6 7 8 10 9 12
4 15 3 2 5 1 6 10 8 7 9 12
Sample Output :

1 
2 6 
3 5 7 
4 8 9 
15 10 12


// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
BinaryTreeNode<int> * maketree(int *in,int insi,int inei,int *pre,int presi,int preei)
{
    if((insi>inei)||(presi>preei))
        return NULL;
    int rootData=pre[presi],k=0,i;
    BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootData);
    for(i=insi;i<=inei;i++)
    {
        if(in[i]==rootData)
            k=i;
    }
    root->left=maketree(in,insi,k-1,pre,presi+1,k-insi+presi);
    root->right=maketree(in,k+1,inei,pre,presi+k-insi+1,preei);

    return root;

}

BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
    // Write your code here
  return maketree(inorder,0, inLength-1,preorder,0,preLenght-1);
}
