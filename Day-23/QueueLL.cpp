#include <bits/stdc++.h>
using namespace std;

//queue ko implement linked list

class Node {
    public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node *front;
    Node *rear;

    public:
    Queue() {
        front = rear = NULL;
    }

    //Queue is empty or not
    bool isEmpty() {
        return front == NULL;
    }

    //push element into the queue
    void push(int x) {
        //empty
        if(isEmpty()) {
            cout << "Pushed " << x << " inside the queue\n";
            front = rear = new Node(x);
            return;
        }
        //not empty
        else {
            rear->next = new Node(x);
            if(rear->next == NULL) {
                cout << "Queue overflow\n";
                return;
            }
            cout << "Pushed " << x << " inside the queue\n";
            rear = rear->next;
        }
    }

    void pop() {
        //empty toh nhi h
        if(isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        else {
            cout << "Popped " << front->data << " from the queue\n";
            Node *temp = front;
            front = front->next;
            delete temp;
        }
    }

    int start() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        else {
            return front->data;
        }
    }
};

int main() {

    Queue q;
    q.push(5);
    q.push(51);
    q.push(115);
    q.push(58);
    q.pop();
    cout << q.start() << endl;

    return 0;
}