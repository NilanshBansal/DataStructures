Preorder Binary Tree
Send Feedback
Given a binary tree, print the preorder traversal of given tree.
Pre-order traversal is: Root LeftChild RightChild
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Pre-order traversal, elements separated by space
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
8 3 1 6 4 7 10 14 13

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

void preOrder(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
if(root==NULL)
{
  return;
}
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);
  return;
}
