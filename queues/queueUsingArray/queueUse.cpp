#include<iostream>
#include"queueUsingArray.h"
using namespace std;

int main(){
    QueueUsingArray<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);

    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getSize()<<endl;

    cout<<q.isEmpty()<<endl;
    return 0;
}