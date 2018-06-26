Rearrange linked list
Send Feedback
Given a singly linked list L : L0→L1→…→Ln-1→Ln . Rearrange the nodes in the list so that the new formed list is : L0→Ln→L1→Ln-1→L2→Ln-2→…
You are required do this in-place without altering the nodes' values.
You just need to return the head of new linked list, don't print the elements.
Input format :
Line 1 : Linked list elements of length n (separated by space and terminated by -1)
Output format :
Updated list elements (separated by space)
Constraints :
1 <= n <= 10^4
Sample Input :
2 5 8 12 -1
Note : -1 at the end of input is just a terminator representing the end of linked list. This -1 is not part of the linked list. Size of given linked list is 4.
Sample Output :
2 12 5 8

/*************
 Following is the Node structure already written.

 template <typename T>
 class Node {
	public:
	T data;
	Node* next;
 
	Node(T data) {
 next = NULL;
 this->data = data;
	}
 
	~Node() {
 if (next != NULL) {
 delete next;
 }
	}
 };
 
*************/

Node<int> *reverse_linked_list_rec(Node<int> *head)
{
    //write your recursive code here
  if(head==NULL || head->next==NULL)
  {
    return head;
  }
  Node<int>* ptr=reverse_linked_list_rec(head->next);
 Node<int>* temp=head->next;
  temp->next=head;
  head->next=NULL;
  return ptr;
}
Node<int>* rearrange(Node<int> *head)
	// Write your code here
{
    Node<int>* ptr=head;
 while(ptr!=NULL)
{
  Node<int>* ptr2=reverse_linked_list_rec(ptr->next);
  ptr->next=ptr2;
  ptr=ptr2;
}
 return head;
}
