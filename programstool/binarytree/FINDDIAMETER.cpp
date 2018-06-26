Find diameter
Send Feedback
Given a Binary Tree, find and return the diameter of input binary tree.
Diameter is - largest count of nodes between any two leaf nodes in the binary tree (both the leaf nodes are inclusive).
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
diameter
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
7  


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
#include<cmath>
int height(BinaryTreeNode<int>* root)
{
  if(root==NULL)
  {
    return 0;
  }
  int lefth=height(root->left);
  int righth=height(root->right);
  if(lefth>righth)
  {
    return lefth+1;
  }
  else
  {
    return righth+1;
  }
}
int diameter(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  if(root==NULL)
  {
    return 0;
  }
  int d1=height(root->left)+height(root->right)+1;
  int d2=diameter(root->left);
  int d3=diameter(root->right);
  return max(d1,max(d2,d3));
}
