Cont Nodes (Vector)
Send Feedback
Given a generic tree, count and return the total number of nodes present in the given tree.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Count of all nodes
Sample Input :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output :
6

// Following is the given TreeNode structure.
/**************
template <typename T>
class TreeNode {
public:
    T data;
    vector<TreeNode<T>*> children;
    
    TreeNode(T data) {
        this->data = data;
    }
    
    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
    
};
***************/


int countOfNodes(TreeNode<int>* root) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  int i;
  int ans=0;
    if(root->children.size()==0)
    {
      return 1;
    }
  for(i=0;i<root->children.size();i++)
  {
    ans+=countOfNodes(root->children[i]);
  }
  return ans+1;
}
