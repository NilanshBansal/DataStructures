#include<iostream>
using namespace std;

template <typename T>
class QueueUsingArray{
    T* data;
    int size;
    int frontIndex;
    int nextIndex;
    int capacity;

    public: 
        QueueUsingArray(int s){
            data = new T[s];
            capacity = s;
            frontIndex = -1;
            nextIndex = 0;
            size = 0;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
            return size == 0;
        }

        void enqueue(T element){
            if(size == capacity){
                cout<<"Queue Full!"<<endl;
                return ;
            }
            data[nextIndex] = element;
            nextIndex = (nextIndex + 1)%capacity;
            if(frontIndex == -1){
                frontIndex++;
            }
            size++;
        }

        T front(){
            if(frontIndex == -1){
                cout<<"Queue Empty!"<<endl;
                return 0;
            }
            return data[frontIndex];
        }

        T dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty!"<<endl;
                return 0;
            }
            T ans = data[frontIndex];
            size--;
            if(size == 0){
                frontIndex = -1;
                nextIndex = 0;
            }
            else{
                frontIndex = (frontIndex+1)%capacity;
            }
            return ans;
        }

};