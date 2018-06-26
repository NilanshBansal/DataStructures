Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.

Input format :

Line 1 : Integer x

Line 2 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Output format : true or false

Sample Input 1 :

40
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :

true
Sample Input 2 :

4
10 3 20 30 40 2 40 50 0 0 0 0 
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

bool containsX(TreeNode<int>* root, int x) {
    // Write your code here
    
    if(root==NULL)
     return false;
     if(root->data==x)
     return true;
     
     
     int i;
     bool d;
     
     for(i=0;i<root->numChildren();i++)
     {
         d=containsX(root->getChild(i),x);
         if(d==true )
         break;
     }
     
     return d;
     
     

}

