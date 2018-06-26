Given a generic tree, find and return the node with second largest value in given tree. Return NULL if no node with required value is present.

Input format :

Line 1 : Elements in level order form separated by space (as per done in class). Order is -

Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element

Sample Input 1 :

10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :

40


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
void secondLargesthelper(TreeNode<int> *root,TreeNode<int>*&largest,TreeNode<int>*&seclargest)
{
   
   int i;
   
   //if(root->numChildren()==0)
   //return NULL;
   
   for(i=0;i<root->numChildren();i++)
    {
        if(root->getChild(i)->data > largest->data)
         {  seclargest=largest;
             largest=root->getChild(i);
           
         }
        else if((root->getChild(i)->data >seclargest->data ) &&(root->getChild(i)->data<largest->data))
        seclargest=root->getChild(i);
        
        secondLargesthelper(root->getChild(i),largest,seclargest);
        
    }
   // return seclargest;
}
TreeNode <int>* secondLargest(TreeNode<int> *root) {
    // Write your code here
   TreeNode <int>* largest=NULL;
   TreeNode <int>*seclargest=NULL;
   if(root==NULL || root->numChildren()==0)
   return NULL;
   
  if( root->getChild(0)->data <= root->data)
  { largest=root;
   seclargest= root->getChild(0);
  }
  else
   {
      largest=root->getChild(0);
   seclargest=root;
   }
  // cout<<"\nlargest is: "<<largest->data;
 //  cout<<"\nsec largest : "<<seclargest->data;
   // return secondLargesthelper(root,largest,seclargest);
   secondLargesthelper(root,largest,seclargest);
   return seclargest;
}

