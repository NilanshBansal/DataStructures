Given a binary tree, check if its balanced i.e. depth of left and right subtrees of every node differ by at max 1. Return true if given binary tree is balanced, false otherwise.

Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Sample Input 1 :

5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :

false
Sample Input 2 :

1 2 3 -1 -1 -1 -1
Sample Output 2 :

true

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
int height(BinaryTreeNode<int>*root)
{

  if(root==NULL)
    return 0;
  int lefth=height(root->left);
  int righth=height(root->right);
  if(righth>lefth)
    return righth+1;
  else
    return lefth +1;

}


bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
    bool a,b;
    if(root==NULL)
        return true;

  int lheight=height(root->left);
  int rheight=height(root->right);
  


  if((lheight-rheight>1)||(rheight-lheight>1))
    return false;

  else
   { a= isBalanced(root->left);
     b= isBalanced(root->right);
    
   }
   
   if(a==true && b==true)
    return true;
   
   
}
