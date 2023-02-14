#include <iostream>
#include <string>

using namespace std;

class Queue
{
private:
    int a[5];
    int front;
    int rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        for(int i=0;i<5;i++){
            a[i]=0;
        }
    }

    bool isEmpty(){
        if(front ==-1 && rear ==-1) return true;
        return false;
    }
    bool isFull(){
        if(rear == 4) return true;
        return false;
    }
    void enqueue(int val){

        if(isFull()){
            cout<<"Queue is full";
            return;
        }
        else if(isEmpty()){
            front = 0;
            rear = 0;
            a[rear] = val;
        }
        else{
            rear++;
            a[rear] = val;
        }
    }
    int dequeue(){
        int dequeueValue;
        if(isEmpty()){
            cout<<"Queue is empty";
            return 0;
        }
        else if(front == rear){
            dequeueValue= a[front];
            a[front]=0;
            rear=-1;
            front=-1;
            return dequeueValue;
        }
        else{
            dequeueValue= a[front];
            a[front]=0;
            front++;
            return dequeueValue;
        }
    }
    int count(){
       if((rear==-1 && front==-1)) return 0;
       return (rear-front+1);
    }
    void display(){
        for(int i =4;i>=0;i--) cout<<a[i]<<"\n";
    }

};

int main()
{

    Queue q;

    q.enqueue(7);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    cout<< "after dequeue\n";
    q.dequeue();
    q.display();
    cout<<"1st count "<<q.count()<<"\n";

    // q.dequeue();
    // q.dequeue();
    q.display();
    cout<<q.count()<<"\n";



    return 0;
}