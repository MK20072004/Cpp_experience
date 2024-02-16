#include<iostream>
using namespace std;

class Node{

    int data;
    Node* previous=nullptr;
    Node* next=nullptr;

    public:

    Node(int value){
        data = value;
    }

    void insertAtHead(Node* &head, int value){
        Node* tmp = new Node(value);
        tmp->next = head;
        head==nullptr? head: head->previous = tmp;
        head = tmp;
    }

    void insertAtTail(Node* &head, int value){
        if (head==nullptr){
            insertAtHead(head, value);
            return;
        }
        if (head->next == nullptr){
            Node* tmp = new Node(value);
            head->next = tmp;
            tmp->previous = head;
            return;
        }
            insertAtTail(head->next, value);
    }

    void display(Node* head){
        if (head == nullptr){
            cout<<"Empty List\n";
            return;
        }
        cout<<head->data;
        if (head->next!=nullptr){
            cout<<" <--> ";
            display(head->next);
        }
        else{cout<<endl;}
    }

    void delHead(Node* &head){
        Node* tmp = head;
        head = head->next;
        if (head!=nullptr){
            head->previous = nullptr;
        }
        delete tmp;
    }

    void delTail(Node* &head){
        if (head == nullptr){
            cout<<"Empty List\n";
            return;
        }
        Node* tmp = head;
        while(tmp->next!=nullptr){
            tmp = tmp->next;
        }
        if (tmp->previous==nullptr){
            delHead(head);
        }
        tmp->previous->next = nullptr;
        delete tmp;
    }

    void del(Node* &head, int value){
        if (head == nullptr){
            cout<<"Empty List\n";
            return;
        }
        if (head->data == value){
            delHead(head);
            return;
        }

        Node* temp = head;
        while ((temp!=nullptr) && (temp->data!=value)){
            temp = temp->next;
        }
        if (temp==nullptr){
            cout<<"Element not in list\n";
            return;
        }
        temp->previous->next = temp->next;
        if (temp->next!=nullptr){
            temp->next->previous = temp->previous;
        }
        delete temp;
    }
};


int main(){

    Node* head = nullptr;
    (*head).insertAtTail(head, 1);
    (*head).insertAtTail(head, 2);
    (*head).insertAtTail(head, 3);
    (*head).display(head);
    (*head).insertAtHead(head, 4);
    (*head).display(head);
    (*head).del(head, 3);
    (*head).display(head);
    (*head).del(head, 4);
    (*head).display(head);
    (*head).del(head, 10);
    (*head).delTail(head);
    (*head).display(head);
    

    return 0;
}