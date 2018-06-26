Max data node
Send Feedback
Given a Binary Tree, find and return the node with maximum data. Return the complete node. Return null is binary tree is empty.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Maximum data node
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
14                  


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

BinaryTreeNode<int>* maxDataNode(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
BinaryTreeNode<int>* ans=root;
  if(root==NULL)
  {
    return ans;
  }
  BinaryTreeNode<int>* right=maxDataNode(root->right);
  BinaryTreeNode<int>* left=maxDataNode(root->left);
 if(left!=NULL)
 {
   if(left->data>ans->data)
   {
     ans=left;
   }
 }
  if(right!=NULL)
  {
    if(right->data>ans->data)
    {
      ans=right;
    }
  }
  if(root->data>ans->data)
  {
    ans=root;
  }
  return ans;
}
