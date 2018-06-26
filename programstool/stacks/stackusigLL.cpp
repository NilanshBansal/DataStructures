Stack Using LL (Without Templates)
Send Feedback
You need to implement a Stack class using linked list.
The data members should be private.
Implement the following public functions :
1. Constructor -
Initialises the data member (i.e. head to null).
2. push :
This function should take one argument of type int and has return type void. This function should insert an element in the stack. Time complexity should be O(1).
3. pop :
This function takes no input arguments and has return type int. This should removes the last element which is entered and return that element as an answer. Return 0 if stack is empty.
Time complexity should be O(1).
4. top :
This function takes no input arguments and has return type int. This should return the last element which is entered and return that element as an answer. Return 0 if stack is empty.
Time complexity should be O(1).
5. size :
Return the size of stack i.e. count of elements which are present ins stack right now. Time complexity should be O(1).
6. isEmpty :
Checks if the stack is empty or not. Return true or false.



/******************
Following Node class and main already created internally. You can directly use that.

#include<iostream>
using namespace std;

class Node {
    public :
    T data;
    Node *next;
    
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

#include "Stack.h"
int main() {
    
    Stack st;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            st.push(input);
        }
        else if(choice == 2) {
            int ans = st.pop();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = st.top();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << st.getSize() << endl;
        }
        else if(choice == 5) {
            cout << st.isEmpty() << endl;
        }
        cin >> choice;
    }
    
}
***********/

class Stack {
    Node *head;
    int size;		// number of elements prsent in stack
    
    public :
    
    Stack() {
        head=NULL;
    size=0;
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        if(size==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
    
    void push(int element) {
        Node *n=new Node(element);
        n->next=head;
        head=n;
        size++;
    }
    
    int pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(size==0)
        {
            cout<<"stack is empty"<<endl;
            return 0;
        }
        int ans=head->data;
        Node *ptr=head;
        head=head->next;
        delete ptr;
        return ans;
    }
    
    int top() {
        // Return 0 if stack is empty. Don't display any other message
        if(size==0)
        {
            return 0;
        }
        return head->data;
    }
    
    
    
};
