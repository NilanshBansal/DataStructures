#include <iostream>
#include "../creation/node.cpp"
using namespace std;

class Pair {
    public:
    Node* head;
    Node* tail;
};

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

Node* returnMidElementLL(Node* head){
    if(head == NULL)    
        return NULL;

    Node* slow = head;
    Node* fast = head->next;
    
    while(fast!=NULL && fast->next!= NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;

}

Node* mergeLL(Node* h1, Node* h2){
    Node* tail1 = h1;
    Node* tail2 = h2;
    Node* finalHead = NULL;
    Node* finalTail = NULL;
    Node* replace = NULL;
    while(tail1!=NULL && tail2!=NULL){
        if(tail1->data <= tail2->data){
            replace = tail1;
            tail1=tail1->next;
        }
        else{
            replace = tail2;
            tail2=tail2->next;
        }
        if(finalHead == NULL){
            finalHead = replace;
            finalTail = replace;
            finalTail->next = NULL;
        }
        else{
            finalTail->next = replace;
            finalTail=finalTail->next;
        }
    }
    if(tail2 == NULL && tail1 != NULL){
        while(tail1!=NULL){
            finalTail->next = tail1;
            finalTail=finalTail->next;
            tail1=tail1->next;
        }
    }

    if(tail1 == NULL && tail2 != NULL){
        while(tail2!=NULL){
            finalTail->next = tail2;
            finalTail=finalTail->next;
            tail2=tail2->next;
        }
    }

    return finalHead;
}

void printLL(Node* head){
    while(head!=NULL){
        cout<<head->data << "-->";
        head=head->next;
    }
}

Node* mergeSortLL(Node* head){
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        return head;
    }
    Node* mid  = returnMidElementLL(head);
    Node* h1 = head;
    Node* h2 = mid->next;
    Node* temp1=h1;
    while(temp1!=mid){
        temp1=temp1->next;
    }
    temp1->next = NULL;
    // printLL(h1);
    // cout<<endl;
    // printLL(h2);
    h1 = mergeSortLL(h1);
    h2 = mergeSortLL(h2);
    return mergeLL(h1,h2);
}

Node* reverseLL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* smallOutput = reverseLL(head->next);
    Node* temp = smallOutput;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallOutput;
}

Pair reverseLLImproved(Node* head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallOutput = reverseLLImproved(head->next);
    smallOutput.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallOutput.head;
    ans.tail = head;
    return ans;
}
Node* reverseLLImprovedHelper(Node* head){
    return reverseLLImproved(head).head;
}

Node* reverseLLBetter(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* smallOutput = reverseLLBetter(head->next);
    
    Node* tail = head->next;
    tail->next=head;
    head->next = NULL;
    tail=tail->next;
    return smallOutput;
}

Node* reverseLLIterative(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* cur = head;
    Node* next = NULL;

    while(cur != NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

int main(){
    /* Node* head1 = takeInput();
    cout<<"FIRST LL"<<endl;
    printLL(head1);
    cout<<endl;

    Node* head2 = takeInput();
    cout<<"SECOND LL"<<endl;
    printLL(head2);
    cout<<endl;

    Node* finalHead = mergeLL(head1,head2);
    printLL(finalHead); */

    Node* head1 = takeInput();
    cout<<"FIRST LL"<<endl;
    printLL(head1);
    cout<<endl;

    // Node* finalHead = mergeSortLL(head1);
    // printLL(finalHead);
    // Node* head = reverseLL(head1);
    // printLL(head);

    // Node* head = reverseLLImprovedHelper(head1);
    // printLL(head);
    // Node* head = reverseLLBetter(head1);
    // printLL(head);

    Node* head = reverseLLIterative(head1);
    printLL(head);
    return 0;
}