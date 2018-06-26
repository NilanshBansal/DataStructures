Bubble Sort (Iterative) LinkedList
Send Feedback
Sort a given linked list using Bubble Sort (iteratively). While sorting, you need to swap the entire nodes, not just the data.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format : Linked list elements (separated by space and terminated by -1)`

Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5

//head is the head of the linked list
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
node* bubble_sort_LinkedList_itr(node* head)
{
    //write your code here
 int len=0,j;
  node* ptr=head;
  while(ptr!=NULL)
  {
    len++;
    ptr=ptr->next;
  }
   ptr=head;
  for(j=0;j<len-1;j++)
  {
    ptr=head;
  for(int i=0;i<len-1;i++)
  {
    if(ptr->data>ptr->next->data)
    {
      if(ptr==head)
      {
        head=head->next;
        node* temp=head->next;
        head->next=ptr;
        ptr->next=temp;
      }
      else
      {
        node* temp2=head;
        while(temp2->next!=ptr)
        {
          temp2=temp2->next;
        }
        node* temp3=ptr->next;
        ptr->next=temp3->next;
        temp2->next=temp3;
        temp3->next=ptr;
      }
    }
    else
    {
      ptr=ptr->next;
    }
  }
  }
  return head;
}
