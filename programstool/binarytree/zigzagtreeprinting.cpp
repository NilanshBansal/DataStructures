Given a binary tree, print the zig zag order i.e print level 1 from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.

Input format :

Elements in level order form (separated by space)

(If any node does not have left or right child, take -1 in its place)

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :

5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :

5
10 6
2 3
9



#include<stack>
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

void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
int flag=0;
BinaryTreeNode<int>* a;
  if(root==NULL)
    return;

    stack<BinaryTreeNode<int>*> cur;
    stack<BinaryTreeNode<int>*> next;
    stack<BinaryTreeNode<int>*> temp;   
    
    cur.push(root);
    
     while(!cur.empty())
     {
       
       
       BinaryTreeNode<int>* p = cur.top();
a=cur.top();

cur.pop();
cout<<a->data<<" ";

  if(flag%2==0)
   {
    if(p->left!=NULL)
    {
        next.push(p->left);

    }


 if(p->right!=NULL)
    {
        next.push(p->right);

    }



}

  else
   {
      if(p->right!=NULL)
    {
        next.push(p->right);

    }

     if(p->left!=NULL)
    {
        next.push(p->left);

    }
      
      
      
    }
    
    


if(cur.empty())
 {  cout<<endl;
     temp=cur;
     cur=next;
     next=temp;
     flag++;
 }




 }



}

   
    
    


