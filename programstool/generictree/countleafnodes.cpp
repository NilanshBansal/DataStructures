Given a generic tree, count and return the number of leaf nodes present in the given tree.

Input format :

Line 1 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Sample Input 1 :

10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :

4

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


int numLeafNodes(TreeNode<int>* root) {
    // Write your code here
    if(root==NULL)
   return 0;
   int count=0;
  if(root->numChildren()==0)
    return 1;
    for(int i=0;i<root->numChildren();i++)
   {count+= numLeafNodes(root->getChild(i));  
   
   }

  return count; 

}

