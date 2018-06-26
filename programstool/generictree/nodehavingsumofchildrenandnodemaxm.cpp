Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. In the sum, data of node itself and data of immediate children is to be taken.

Input format :

Line 1 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : Node with maximum sum.

Sample Input 1 :

5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
Sample Output 1 :

1


// Following is the given Tree node structure
/**************

class TreeNode {
	TreeNode<T>** children;
	int childCount;

	public:
	T data;

	TreeNode(T data);	// Constructor
	int numChildren();
	void addChild(TreeNode<T>* child);
	TreeNode<T>* getChild(int index);
	void setChild(int index, TreeNode<T>* child);
};

***************/
#include<limits.h>
void maxSumNodehelper(TreeNode<int> *root,TreeNode<int>* &max,int &sumprev)
{
    int sum=root->data,i;
    
    for(i=0;i<root->numChildren();i++)
    {
        sum+=root->getChild(i)->data;
    }
    
    if(sum>sumprev)
     {
        sumprev=sum;
        max=root;
     }

   for(i=0;i<root->numChildren();i++)
   {
      maxSumNodehelper(root->getChild(i),max,sumprev);
   }
   
}

TreeNode<int>* maxSumNode(TreeNode<int> *root){
    // Write your code here
  
  TreeNode<int>* max=NULL;
  int sumprev=INT_MIN;
  if(root==NULL)
  return NULL;
  
  
  
  maxSumNodehelper(root,max,sumprev);
  return max;
}

