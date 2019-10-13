#include<bits/stdc++.h>
using namespace std;
class Queue{
    private:
        int front;
        int rear;
        int size;
        int *Q;
    public:
        Queue(){
            front=-1;
            rear=-1;
            cout<<"Enter Size:"<<endl;
            cin>>size;
            Q=new int[size];
        }
        void enQueue(int);
        int deQueue();
        void display();
        int isEmpty();
        int isFull();
};

int Queue::isEmpty(){
    if(front==rear)
        return 1;
    else
    {
        return 0;
    }
}

int Queue::isFull(){
    if((rear+1)%size == front)
        return 1;
    else
        return 0;
}

void Queue::enQueue(int x){
    if(isFull())
        cout<<"Overflow"<<endl;
    else{
        rear=(rear+1)%size;
        Q[rear]=x;
        cout<<"Element added: "<<x<<endl;
    }
}

int Queue::deQueue(){
    int x=-1;
    if(isEmpty()){
        cout<<"Underflow"<<endl;
    }
    else{
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
}

void Queue::display(){
    if(isEmpty())
        cout<<"Underflow"<<endl;
    else{
        int i=(front+1)%size;
        do{
            cout<<Q[i]<<endl;
            i=(i+1)%size;
        }while(i != (rear+1)%size);
    }
}


int main(){
    Queue q;

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.display();
    int x=q.deQueue();
    cout<<"Element Deleted: "<<x<<endl;
    q.display();
    x=q.deQueue();
    cout<<"Element Deleted: "<<x<<endl;
    q.display();
    x=q.deQueue();
    cout<<"Element Deleted: "<<x<<endl;
    q.display();
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.display();
    return 0;
}