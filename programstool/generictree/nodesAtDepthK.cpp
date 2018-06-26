Nodes at depth k (Vector)
Send Feedback
Given a generic tree and an integer k, print all the nodes which are at depth k.
Root is at depth 0.
Input format :
Elements in level order form separated by space (as per done in class). Order is - 
Root_data, n (No_Of_Child_Of_Root), n children, and so on for every element 
Output Format :
Nodes at depth k (separated by space)
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
1
Sample Output :
20 30 40

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


void printNodesAtDepthK(TreeNode<int>* root, int k) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
  int i;
    if(k==0)
    {
      cout<<root->data<<" ";
      return;
    }
  for(i=0;i<root->children.size();i++)
  {
    printNodesAtDepthK(root->children[i],k-1);
  }
  return;
}
