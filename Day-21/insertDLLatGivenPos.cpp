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

Node *CreateDLL(int arr[], int index, int size, Node *back) {
    if(index == size) return NULL;

    //create node
    Node *temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr,index+1,size,temp);
    return temp;
}


int main() {

    //Create doubly LL
    int arr[] = {1,2,3,4,5};

    int pos = 2;

    Node* head = CreateDLL(arr, 0, 5, NULL);

    //insert at start
    if(pos==0) {
        //LL exist na kare
        if(head == NULL) {
            head = new Node(5);
        }
        //Exist karti h
        else {
            Node *temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else {
        Node *curr = head;
        //go to the node, after which i have to insert
        while(--pos) {
            curr = curr->next;
        }

        //insert at end
        if (curr->next==NULL) //last node
        {
            Node *temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        //insert at middle
        else {
            Node *temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }

    Node *traverse = head;
    while(traverse) {
        cout << traverse->data<< " ";
        traverse = traverse->next;
    }

    return 0;
}