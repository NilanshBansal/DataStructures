#include <iostream>
using namespace std;

template <typename T>
class Node {
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class StackUsingLL{
    Node<T>* head;
    int size;

    public:
        StackUsingLL(){
            head = NULL;
            size = 0;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
            return size == 0;
        }

        void push(T element){
            Node<T>* newNode = new Node<T>(element);
            newNode->next = head;
            head = newNode;
            size++;
        }

        T pop(){
            if(head == NULL){
                return 0;
            }
            Node<T>* temp = head;
            T tempData = head->data;
            head = head->next;
            delete temp;
            size--;
            return tempData;
        }

        T top(){
            if(head == NULL){
                return 0;
            }
            return head->data;
        }
};