In a given Generic Tree, replace each node with its depth value. You need to just update the data of each node, no need to return or print anything.

Input format :

Line 1 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Sample Input 1 :

10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 : (Level wise, each level in new line)

0 
1 1 1 
2 2

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
void replacehelper(TreeNode<int> *root,int count)
{
    
    if(root==NULL)
	 return;
	 
    root->data=count;
    count++;
	
	int i;
	
	for(i=0;i<root->numChildren();i++)
	{
	    root->getChild(i)->data=count;
	    replacehelper(root->getChild(i),count);
	}
    
    
}

void replaceWithDepthValue(TreeNode<int> *root){    
	// Write your code here
	if(root==NULL)
	 return;
	replacehelper(root,0); 

}

