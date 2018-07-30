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
        QueueUsingArray(){
            data = new T[4];
            capacity = 4;
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
                T* newdata = new T[2*capacity];
                int j = 0;
                for(int i=frontIndex;i<capacity;i++){
                    newdata[j] = data[i];
                    j++;
                }
                for(int i =0;i<frontIndex;i++){
                    newdata[j] = data[i];
                    j++;
                }
                delete [] data;
                data = newdata;
                frontIndex = 0;
                nextIndex = capacity;
                capacity *= 2;
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