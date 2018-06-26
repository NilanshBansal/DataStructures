Insert Linked List recursively
Suggest Edit
Given a linked list, an integer n and a position i, Insert that node n into Linked List at ith position recursively.

Indexing starts from 0. You don't need to print the elements, just insert and return the head of updated LL.

Input format :

Line 1 : Linked list elements (separated by space and terminated by -1)

Line 2 : Position (i)

Line 3 : n (Node to be inserted)

Sample Input 1 :

3 4 5 2 6 1 9 -1
3
100
Sample Output 1 :

3 4 5 100 2 6 1 9
Sample Input 2 :

3 4 5 2 6 1 9 -1
0
20
Sample Output 2 :

20 3 4 5 2 6 1 9



//head is head of linked list,i is the index, data is data of your node
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

node* insert_node_recursion(node* head,int i,int data)
{
    //write your code here
   if(i==0)
   {
       if(head==NULL)
        {
            
            node* newnode=new node(data);
            head=newnode;
            head->next=NULL;
            return head;
        }
        else
         {
           node* newnode=new node(data);
           newnode->next=head;
           head=newnode;
           return head;
         }
         
   }
   
 head->next=  insert_node_recursion(head->next,i-1,data);
   return head;
}
