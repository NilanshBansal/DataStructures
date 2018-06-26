Delete every N nodes
Send Feedback
Given a linked list and two integers M and N. Traverse the linked list such that you retain M nodes then delete next N nodes, continue the same until end of the linked list. That is, in the given linked list you need to delete N nodes after every M nodes.
Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : M

Line 3 : N

Sample Input 1 :
1 2 3 4 5 6 7 8 -1
2
2
Sample Output 1 :
1 2 5 6
Sample Input 2 :
1 2 3 4 5 6 7 8 -1
2
3
Sample Output 2 :
1 2 6 7

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

node* skipMdeleteN(node  *head, int M, int N) {
    // Write your code here
int count1=1,count2=1;
  node* temp1=head;
  node* temp2=head;
  while(temp2!=NULL)
  {
  while(count1!=M && temp1->next!=NULL)
  {
    count1++;
    temp1=temp1->next;
  }
  temp2=temp1->next;
  while(count2!=N+1 && temp2!=NULL)
  {
    count2++;
    node* ptr=temp2;
    temp2=temp2->next;
    delete ptr;
  }
  temp1->next=temp2;
    count1=1;
    count2=1;
    temp1=temp2;
  }
  return head;
}
