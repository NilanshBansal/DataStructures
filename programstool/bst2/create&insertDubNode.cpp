Create & Insert Duplicate Node
Send Feedback
Given a BST with N number of nodes, for each node create a new duplicate node, and insert that duplicate as left child of the original node.
Note : Root will remain same. So you just need to insert nodes in the given BST and no need to print or return anything.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Level order traversal of updated tree. (Every level in new line)
Constraints :
1 <= N <= 1000
Sample Input :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
Sample Output :
8 
8 10 
5 10 
5 6 
2 6 7 
2 7

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

void insertDuplicateNode(BinaryTreeNode<int> *root) {
    // Write your code here
if(root==NULL)
{
  return;
}
  insertDuplicateNode(root->left);
  insertDuplicateNode(root->right);
  BinaryTreeNode<int> *temp=new BinaryTreeNode<int>(root->data);
  temp->left=root->left;
  root->left=temp;
  return;
}
