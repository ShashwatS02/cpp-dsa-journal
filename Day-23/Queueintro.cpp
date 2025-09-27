#include <bits/stdc++.h>
using namespace std;

//implement queue using array
class Queue {
    int *arr;
    int front, rear, size;

    public:

    //constructor
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    //if queue is empty or not
    bool isEmpty() {
        return front == -1;
    }

    //queue is full of not
    bool isFull() {
        return rear == size-1;
    }

    //push element into queue, end
    void push(int x) {
        //empty
        if(isEmpty()) {
            cout << "Pushed " << x << " into the queue\n";
            front = rear = 0;
            arr[0] = x;
        }
        //full
        else if(isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        //insert
        else {
           rear = rear+1;
           arr[rear] = x; 
           cout << "Pushed " << x << " into the queue\n";
        }
    }

    //pop element, starting
    void pop() {
        //Empty
        if(isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        //pop kar do
        else {
            if(front==rear) {
                cout << "Popped " << arr[front] << " outside the queue\n";
                front = rear = -1;
            }
            else {
                cout << "Popped " << arr[front] << " outside the queue\n";
                front = front+1;
            }
        }
    }

    //start mein kaunsa element rakha hai
    int start() {
        if(isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        else return arr[front];
    }

};

int main() {

    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    q.pop();
    int x = q.start();
    if(!q.isEmpty())
    cout << x << " "; 

    return 0;
}