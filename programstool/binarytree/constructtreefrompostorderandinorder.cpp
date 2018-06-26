Given Postorder and Inorder traversal of a binary tree, create the binary tree associated with the traversals.You just need to construct the tree and return the root.

Note: Assume binary tree contains only unique elements.

Input format :

Line 1 : n (Total number of nodes in binary tree)

Line 2 : Post order traversal

Line 3 : Inorder Traversal

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :

8
8 4 5 2 6 7 3 1
4 8 2 5 1 6 3 7
Sample Output :

1 
2 3 
4 5 6 7 
8

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


BinaryTreeNode<int> * gettreehelper(int *in,int insi,int inei,int *post,int postsi,int postei)
   {
      if((insi>inei)||(postsi>postei))
        return NULL;

      int rootData=post[postei],k=0,i;
       BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootData);
      for(i=insi;i<=inei;i++)
    {
        if(in[i]==rootData)
            k=i;
    }

   root->left=gettreehelper(in,insi,k-1,post,postsi,k-insi+postsi-1);
    root->right=gettreehelper(in,k+1,inei,post,postsi+k-insi,postei-1);

    return root;

   }
BinaryTreeNode<int>* getTreeFromPostorderAndInorder(int *postorder, int postLength, int *inorder, int inLength) {
    // Write your code here
   return gettreehelper(inorder,0,inLength-1,postorder,0,postLength-1);
}
