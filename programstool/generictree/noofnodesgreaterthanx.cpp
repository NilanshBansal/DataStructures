Given a tree and an integer x, find and return number of Nodes which are greater than x.

Input format :

Line 1 : Integer x

Line 2 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : Count of nodes greater than x

Sample Input 1 :

35
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :

3
Sample Input 2 :

10
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 2:

5

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

int nodesGreaterThanX(TreeNode<int> *root, int x) {
    // Write your code here
  
  if(root==NULL)
   return 0;
   
   int i,count=0;
   
   
  if(root->data>x)
   count= 1;
   
   for(i=0;i<root->numChildren();i++)
   {
       
      count+=nodesGreaterThanX(root->getChild(i),x);
   }
  
  
  return count;
  
  
}

