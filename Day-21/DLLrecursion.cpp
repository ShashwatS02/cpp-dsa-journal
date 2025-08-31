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

    Node *head = NULL;

    //Create doubly LL
    int arr[] = {1,2,3,4,5};

    //create it with recursion
    head = CreateDLL(arr,0,5,NULL);
    

    Node *traverse = head;
    while(traverse) {
        cout << traverse->data<< " ";
        traverse = traverse->next;
    }

    return 0;
}