#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int value) {
        data = value;
        next = prev = NULL;
    }
};


int main() {

    Node *head = NULL, *tail = NULL;

    //Create doubly LL
    int arr[] = {1,2,3,4,5};

    for (int i = 0; i <5; i++) {
        //LL doesn't exist
        if (head == NULL) {
            head = new Node(arr[i]);
            tail = head;
        }
        //LL exists
        else{
            Node *temp = new Node(arr[i]);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    Node *traverse = head;
    while(traverse) {
        cout << traverse->data<< " ";
        traverse = traverse->next;
    }

    return 0;
}