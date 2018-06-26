MergeSort Linked List
Send Feedback
Sort a given linked list using Merge Sort.
You don't need to print the elements, just sort the elements and return the head of updated LL.
Input format :
Linked list elements (separated by space and terminated by -1)
Output format :
Updated LL elements (separated by space)
Constraints :
1 <= Length of LL <= 1000
Sample Input 1 :
1 4 5 2 -1
Sample Output 1 :
1 2 4 5


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
node* mergeTwoLLs(node *head1, node *head2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    node* head;
    node* tail;
  if(head1->data<head2->data)
  {
    head=head1;
    tail=head1;
    head1=head1->next;
  }
  else
  {
    head=head2;
    tail=head2;
    head2=head2->next;
  }
  while(head1!=NULL && head2!=NULL)
  {
    if(head1->data < head2->data)
    {
      tail->next=head1;
      tail=tail->next;
      head1=head1->next;
    }
    else
    {
       tail->next=head2;
      tail=tail->next;
      head2=head2->next;
    }
  }
  if(head1==NULL)
  {
    tail->next=head2;
  }
  if(head2==NULL)
  {
    tail->next=head1;
  }
  return head;
}



node* mergeSort(node *head) {
    //write your code here
  if(head->next==NULL)
  {
    return head;
  }
  node *temp=head;
  node *temp1=head->next;
  while(temp1!=NULL && temp1->next!=NULL)
  {
    temp=temp->next;
    temp1=temp1->next->next;
  }
  node *prev=temp->next;
  node *next=head;
  temp->next=NULL;
  prev=mergeSort(prev);
  next=mergeSort(next);
  return mergeTwoLLs(prev,next);
}
