Count Leaf nodes
Send Feedback
Given a Binary Tree, find and return the count of leaf nodes. Leaf nodes are those, who don't have any children.
Root is also leaf node if both its child are null.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
count of leaf nodes
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
4          

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

int countLeafNodes(BinaryTreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
int countL;
  int countR;
  if(root==NULL)
  {
    return 0;
  }
  countL=countLeafNodes(root->left);
  countR=countLeafNodes(root->right);
  int count=countL+countR;
  if(root->left==NULL && root->right==NULL)
  {
    count=count+1;
  }
  return count;
  
}
