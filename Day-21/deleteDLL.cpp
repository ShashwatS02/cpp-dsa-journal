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

    int pos = 3;

    Node* head = CreateDLL(arr, 0, 5, NULL);

    //Delete at start
    // if (head!=NULL) {
    //     //if only one node exists
    //     if (head->next == NULL) {
    //         delete head;
    //         head = NULL;
    //     }
    //     //if more than one node exists
    //     else {
    //         Node *temp = head;
    //         head = head->next;
    //         delete temp;
    //         if (head)
    //         head->prev = NULL;
    //     }
    // }

    //Delete at end
    // if (head!=NULL) {
    //     //if only 1 node exists
    //     if (head->next==NULL) {
    //         delete head;
    //         head = NULL;
    //     }
    //     //more than 1 node exists
    //     else {
    //         Node *curr = head;
    //         //take this to the last node
    //         while(curr->next) {
    //             curr = curr->next;
    //         }
    //         curr->prev->next = NULL;
    //         delete curr;
    //     }
    // }

    //Delete at given position
    //delete at start
    if (pos==1)
    {
        if (head->next == NULL) {
            delete head;
            head = NULL;
        }
        //if more than one node exists
        else {
            Node *temp = head;
            head = head->next;
            delete temp;
            if (head)
            head->prev = NULL;
        }
    }
    else{
        Node *curr = head;
        while(--pos) {
            curr = curr->next;
        }
      //delete at end
      if(curr->next==NULL) {
        curr->prev->next = NULL;
        delete curr;
      }
      else {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
      }
      //delete at middle  
    }
    //delete at end
    //delete at middle

    Node *traverse = head;
    while(traverse) {
        cout << traverse->data<< " ";
        traverse = traverse->next;
    }

    return 0;
}