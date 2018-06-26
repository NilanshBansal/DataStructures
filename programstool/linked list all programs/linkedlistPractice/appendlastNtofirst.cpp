AppendLastNToFirst
Send Feedback
Given a linked list and an integer n, append the last n elements of the LL to front.
Indexing starts from 0. You don't need to print the elements, just update the elements and return the head of updated LL.
Assume given n will be smaller than length of LL.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 2 3 4 5 -1
3
Sample Output 1 :
3 4 5 1 2

//head is the head of the linked list and n is  how many element you want to append from the last to the front
// Following is the node structure
/**************
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
***************/

node* append_LinkedList(node* head,int n)
{
    //write your code here
  node* ptr1=head;
  int len=0;
  while(ptr1!=NULL)
  {
    len++;
    ptr1=ptr1->next;
  }
  node* temp=head;
  int i;
  for(i=0;i<len-n;i++)
  {
    head=head->next;
  }
  node* ptr=head;
  while(ptr->next!=NULL)
  {
    ptr=ptr->next;
  }
  node* ptr2=temp;
  while(ptr2->next!=head)
  {
    ptr2=ptr2->next;
  }
  ptr2->next=NULL;
  ptr->next=temp;
  return head;
}

