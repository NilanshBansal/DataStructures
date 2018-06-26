Given a binary tree, write code to create a separate linked list for each level. You need to return the array which contains head of each level linked list.

Input format :

Elements in level order form (separated by space). If any node does not have left or right child, take -1 in its place.

Output format : Each level linked list is printed in new line (elements separated by space).

Sample Input :

5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :

5 
6 10 
2 3 
9

// Following is the Node and Binary Tree node structure

/**************
class node{
public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        this->next=NULL;
    }
};

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
#include<vector>
#include<queue>

vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int> *root) {
    vector<node<int>*> v;
    
	if(root==NULL)
	{ v.push_back(NULL);
	  return v;
	}

	queue<BinaryTreeNode<int>*> q;

	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{ BinaryTreeNode<int>* current = q.front();
          q.pop();
	  
		
		if(current==NULL)
		{ if(!q.empty())
		  q.push(NULL);
	        }
		else
		{ node<int>* newNode = new node<int>(current->data);
		  newNode->next = NULL;
		  v.push_back(newNode);
			
		  if(current->left!=NULL)
		  q.push(current->left);
		  if(current->right!=NULL)
		  q.push(current->right);

		  current = q.front();
		  q.pop();
		  
		  if(current==NULL)
		  { if(!q.empty())
		    q.push(NULL);
	          }
		
		  while(current!=NULL)
		  { if(current->left!=NULL)
		    q.push(current->left);
		    if(current->right!=NULL)
		    q.push(current->right);

		    
		    node<int>* nextNode = new node<int>(current->data);
		    newNode->next = nextNode;
		    nextNode->next = NULL;
	    	newNode = nextNode;
		    
		    current = q.front();
		    q.pop();
		
		    if(current==NULL)
		    { if(!q.empty())
		      q.push(NULL);
	        }
		  }
		 
		}		

	}

return v;
}
