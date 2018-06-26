Min and max
Send Feedback
Given a binary tree, find and return the min and max data value of given binary tree.
Return the output as an object of PairAns class, which is already created.
Input format :
Elements in level order form (separated by space)
(If any node does not have left or right child, take -1 in its place)
Output Format :
Max and min (separated by space)
Sample Input :
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output :
14 1


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
 
 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
 };
 
***************/
#include<algorithm>
#include<iostream>
#include<cmath>
#include<climits>
PairAns minMax(BinaryTreeNode<int> *root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  if(root==NULL)
  {
    PairAns help1;
    help1.min=INT_MAX;
    help1.max=INT_MIN;
    return help1;
  }
  PairAns ans;
PairAns helpL=minMax(root->left);
PairAns helpR=minMax(root->right);
  ans.min=min(helpL.min,helpR.min);
  ans.max=max(helpL.max,helpR.max);
  if(root->data>ans.max)
  {
    ans.max=root->data;
  }
  if(root->data<ans.min)
  {
    ans.min=root->data;
  }
  
  return ans;
  
  
  
  
}
