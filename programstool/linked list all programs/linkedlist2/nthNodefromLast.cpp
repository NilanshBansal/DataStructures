Nth node from last
Send Feedback
Given a linked list and an integer n you need to find and return the nth node from last without calculating length of input linked list.
Return null if length of LL is smaller than n.
Counting of nodes starts from 0.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer n 
Output format :
nth node from last
Sample Input 1 :
3 4 5 2 6 1 9 -1
0
Sample Output 1 :
9
Sample Input 2 :
3 4 5 2 6 1 9 -1
4
Sample Output 2 :
5


 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
*********/

Node* nthNodeFromLastIter(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    int len=0;
  Node* temp=head;
  while(temp!=NULL)
  {
    len++;
    temp=temp->next;
  }
  Node* temp2=head;
  if(n>=len)
  {
    return NULL;
  }
  else
  {
  int check=len-n-1;
  
  for(int i=0;i<check;i++)
  {
    temp2=temp2->next;
  }
  }
  return temp2;
}


