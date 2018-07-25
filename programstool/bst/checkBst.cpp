Check BST
Send Feedback
Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree) or not. If yes, return true, return false otherwise.
Duplicate elements should be in right subtree.
Input format :
Line 1 : Nodes in level order form (separated by space). If any node does not have left or right child, take -1 in its place
Output format :
true or false
Constraints :
1 <= N <= 10^5
Sample Input 1 :
3 1 5 -1 2 -1 -1 -1 -1
Sample Output 1 :
true
Sample Input 2 :
5 2 10 0 1 -1 15 -1 -1 -1 -1 -1 -1
Sample Output 2 :
false

#include<climits>
int minimum(BinaryTreeNode<int>* root)
{
  if(root==NULL)
    return INT_MAX;
  int leftAns=minimum(root->left);
  int rightAns=minimum(root->right);
  return min(min(leftAns,rightAns),root->data);
  
}
int maximum(BinaryTreeNode<int>* root)
{
  if(root==NULL)
    return INT_MIN;
  int leftAns=maximum(root->left);
  int rightAns=maximum(root->right);
  return max(max(leftAns,rightAns),root->data);
  
}
bool isBST(BinaryTreeNode<int> *root){
       /* Don't write main().
	* Don't read input, it is passed as function argument.
	* Return output and don't print it.
	* Taking input and printing output is handled automatically.
	*/
if(root==NULL)
  return true;
    int leftMax=maximum(root->left);
    if(leftMax>=root->data)
    return false;
    
    int rightMin=minimum(root->right);
    if(rightMin<=root->data)
    return false;
    
  bool leftAns=isBST(root->left);
  bool rightAns=isBST(root->right);
  return leftAns && rightAns;
}