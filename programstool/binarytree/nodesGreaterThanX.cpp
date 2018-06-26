Nodes greater than x
Send Feedback
Given a Binary Tree and an integer x, find and return the count of nodes which are having data greater than x.
Input format :
Line 1 : Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Line 2 : Integer x
Output Format :
count
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
8
Sample Output :
3            

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

int countNodesGreaterThanX(BinaryTreeNode<int>* root, int x) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
int left;
  int right;
  if(root==NULL)
  {
    return 0;
  }
  left= countNodesGreaterThanX(root->left,x);
  right= countNodesGreaterThanX(root->right,x);
  int count=left+right;
  if(root->data>x)
  {
    count=count+1;
  }
  return count;
}
