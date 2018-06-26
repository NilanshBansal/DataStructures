Given a binary tree, print the level order traversal. Make sure each level start in new line.

Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Output Format :

Elements are printed level wise, each level in new line (separated by space).

Sample Input :

5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :

5 
6 10 
2 3 
9


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

void printLevelATNewLine(BinaryTreeNode<int> *root) {
    // Write your code here
 BinaryTreeNode<int>* a;
  if(root==NULL)
    return;

    queue<BinaryTreeNode<int>*> cur;
    queue<BinaryTreeNode<int>*> next;
    queue<BinaryTreeNode<int>*> temp;
   
   // BinaryTreeNode<int>*temp=NULL;

    cur.push(root);
    //BinaryTreeNode<int>* prev=NULL ;
    //BinaryTreeNode<int>* prepre=NULL ;


     while(!cur.empty())
     {

       BinaryTreeNode<int>* p = cur.front();




    if(p->left!=NULL)
    {
        next.push(p->left);

    }


 if(p->right!=NULL)
    {
        next.push(p->right);

    }


a=cur.front();
cur.pop();
cout<<a->data<<" ";
if(cur.empty())
 {  cout<<endl;
     temp=cur;
     cur=next;
     next=temp;
     
 }




 }



}


