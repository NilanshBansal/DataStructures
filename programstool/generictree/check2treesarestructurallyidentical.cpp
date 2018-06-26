Given two Generic trees, return true if they are structurally identical i.e. they are made of nodes with the same values arranged in the same way.

Input format :

Line 1 : Tree 1 elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Line 2 : Tree 2 elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : true or false

Sample Input 1 :

10 3 20 30 40 2 40 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0
Sample Output 1 :

true
Sample Input 2 :

10 3 20 30 40 2 40 50 0 0 0 0 
10 3 2 30 40 2 40 50 0 0 0 0
Sample Output 2:

false


// Following is the Tree node structure
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

bool isIdentical(TreeNode<int> *root1, TreeNode<int> *root2) {
	// Write your code here
  if(root1==NULL && root2==NULL)
  return true;
  
  if((root1!=NULL && root2==NULL) ||(root2!=NULL && root1==NULL))
   return false;
   bool d=true;
   
  if(root1->data!=root2->data)
   return false;
   
 if(root1->numChildren()!=root2->numChildren())
 return false;
 int i;
 for(i=0;i<root1->numChildren();i++)
   {
      d= isIdentical(root1->getChild(i),root2->getChild(i)) ;  
       
   }
 
 return d;
   
  
}
