Even after Odd LinkedList
Send Feedback
Arrange elements in a given Linked List such that, all even numbers are placed after odd numbers. Respective order of elements should remain same.
You don't need to print the elements, instead return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 5 4 2 
Sample Input 2 :
1 11 3 6 8 0 9 -1
Sample Output 2 :
1 11 3 9 6 8 0

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

node* arrange_LinkedList(node* head)
{
    //write your code here
  node* oddhead=NULL;
  node* evenhead=NULL;
  node* oddtail=NULL;
  node* eventail=NULL;
  while(head!=NULL)
  {
  if(head->data%2!=0)
  {
    if(oddhead==NULL)
    {
      oddhead=head;
      oddtail=head;
    }
    else
    {
      oddtail->next=head;
      oddtail=oddtail->next;
    }
    
  }
  else
  {
    if(evenhead==NULL)
    {
      evenhead=head;
      eventail=head;
    }
    else
    {
      eventail->next=head;
      eventail=eventail->next;
    }
  }
    head=head->next;
  }
  oddtail->next=evenhead;
  eventail->next=NULL;
  return oddhead;
}
