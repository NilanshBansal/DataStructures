#include "node.cpp"
#include <iostream>
using namespace std;

Node* takeInput(){
    char ch='y';
    int data;
    Node* head = NULL;
    Node* tail = NULL;
    while(ch=='y'){
        cin>>data;
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        cout<<"enter more(y or n): ";
        cin>>ch;
    }
    return head;
}

Node* InsertNode(int data,int index, Node* head){
    int count = 0;
    cout<<"inside func";
    Node* temp = head;
    Node* newNode = new Node(data);
    cout<<index;
    if(index == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }
    while(temp!=NULL){
        if(count == index - 1){
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        else{
            temp = temp->next;
            count++ ;
        }
    }
    return head;
}

Node* deleteNode(int index, Node* head){
    Node* temp = head;
    Node* ptr = NULL;
    int count = 0;
    if(head==NULL){
        return NULL;
    }
    if(index == 0){
        ptr = head;
        head = ptr->next;
        delete ptr;
        return head;
    }
    while(temp!=NULL){
        if(count == index-1){
            ptr = temp->next;
            temp->next = ptr->next;
            delete ptr;
            break;
        }
        else{
            temp = temp->next;
            count++;
        }
    }
    return head;
}

Node* InsertNodeRecursivelyLL(int data,int index,Node* head){
    if(head==NULL && index!=0){
        return NULL;
    }
    if(index == 0){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    head->next = InsertNodeRecursivelyLL(data,index-1,head->next);
    return head;

}
Node* DeleteNodeRecursivelyLL(int index,Node* head){
    if(head == NULL){
        return NULL;
    }
    if(index == 0){
        Node* ptr = head;
        head = head->next;
        delete ptr;
        return head;
    }
    head->next = DeleteNodeRecursivelyLL(index-1,head->next);
    return head;

}
void printMidElementLL(Node* head){
    if(head == NULL)    
        return;

    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!=NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<slow->data;

}
void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data << "-->";
        head=head->next;
    }
}

int main(){
    Node* head = takeInput();
    cout<<"FIRST TIME"<<endl;
    printLL(head);
    cout<<endl;
    int i,data;
    // cin>>i >>data;
    // head = InsertNode(data,i,head);
    // cout<<"SECOND TIME"<<endl;
    // printLL(head);
    // cout<<endl;
    // cin>>i >>data;
    // head = InsertNodeRecursivelyLL(data,i,head);
    // cout<<"SECOND TIME"<<endl;
    // printLL(head);
    // cout<<endl;
    // cin>>i >>data;
    // head = InsertNodeRecursivelyLL(data,i,head);
    // cout<<"SECOND TIME"<<endl;
    // printLL(head);
    // cout<<endl;
    // cin>>i >>data;
    // head = InsertNodeRecursivelyLL(data,i,head);
    // cout<<"SECOND TIME"<<endl;
    // printLL(head);
    // cout<<endl;
    // cin>>i >>data;
    // head = InsertNodeRecursivelyLL(data,i,head);
    // cout<<"SECOND TIME"<<endl;
    // printLL(head);
    // cout<<endl;
    // cin>>i;
    // head = deleteNode(i,head);
    // cout<<endl;
    // printLL(head);
    // cin>>i;
    // head = deleteNode(i,head);
    // cout<<endl;
    // printLL(head);
    

    // cin>>i;
    // head = DeleteNodeRecursivelyLL(i,head);
    // cout<<endl;
    // printLL(head);
    // cin>>i;
    // head = DeleteNodeRecursivelyLL(i,head);
    // cout<<endl;
    // printLL(head);
    // cin>>i;
    // head = DeleteNodeRecursivelyLL(i,head);
    // cout<<endl;
    // printLL(head);



    printMidElementLL(head);
    head = takeInput();
    cout<<"Second TIME"<<endl;
    printLL(head);
    cout<<endl;
    printMidElementLL(head);
    return 0;
}
