Given a generic tree and an integer n. Find and return the node with next larger element in the Tree i.e. find a node with value just greater than n.

Return NULL if no node is present with value greater than n.

Input format :

Line 1 : Integer n

Line 2 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : Node with value just greater than n.

Sample Input 1 :

18
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :

20
Sample Input 2 :

21
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 2:

30


#include<limits.h>
#include<iostream>
using namespace std;
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
void nextLargerElementhelper(TreeNode<int> *root, int n,TreeNode<int> *&largertillnow,int &diff)
{ int i,temp=INT_MAX;

 if( root->data >n )
   { temp=root->data-n;
       if(temp<diff)
      { diff=root->data-n;
       largertillnow=root;
      }
   }
   for(i=0;i<root->numChildren();i++)
   {
       nextLargerElementhelper(root->getChild(i),n,largertillnow,diff);
   }
}
TreeNode<int>* nextLargerElement(TreeNode<int> *root, int n) {
    // Write your code here
  int diff=INT_MAX;
  TreeNode<int>* largertillnow=NULL;
  if(root==NULL) 
  return NULL;
  
  
  
   
  nextLargerElementhelper(root,n,largertillnow,diff);
  return largertillnow;
}

