#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next=nullptr;

    

    /*Constructor's below*/
    Node(){
        cout<<"This is default constructor of Node class\n";
    }
    Node(int value){
        data = value;
    }
    Node(int value, Node* address){
        data = value;
        next = address;
    }

    /*Destructor*/
    ~Node(){
        cout<<"This is destructor of the class\n";
    }

    /*Length*/
    int size(Node* head){
        if (head==nullptr){
            return 0;
        }
        int len=1;
        Node* tmp = head;
        while (tmp->next!=head){
            len++;
            tmp = tmp->next;
        }
        return len;
    }

    /*Insert by index, at head or at tail*/
    void insertHead(Node* &head, int value){
        if (head==nullptr){
            head = new Node(value);
            head->next = head;
            return;
        }

        Node* start = head, *end=head;
        while(end->next!=head){
            end = end->next;
        }
        head = new Node(value, start);
        end->next = head;
    }

    void insertTail(Node* &head, int value){
        if (head == nullptr){
            head = new Node(value);
            head->next = head;
            return;
        }

        Node* tmp = head;
        while(tmp->next!=head){
            tmp = tmp->next;
        }
        tmp->next = new Node(value, head);
    }

    void insert(Node* &head, int value, int index){
        index = (index<0? -index: index); 
        if (index==0 || head==nullptr){
            insertHead(head, value);
            return;
        }
        if (index>=size(head)){
            insertTail(head, value);
            return;
        }
        Node* tmp = head;
        while (index!=1){
            tmp = tmp->next;
            index--;
        }
        Node* el = new Node(value, tmp->next);
        tmp->next = el;
    }

    /*Display*/
    void display(Node* head){
        if (head==nullptr){
            cout<<"No elements in the list\n";
            return;
        }
        Node* tmp = head;
        while (tmp->next!=head){
            cout<<tmp->data<<" --> ";
            tmp = tmp->next;
        }
        cout<<tmp->data<<" --> "<<tmp->next->data<<endl;
    }

    /*Delete*/
    void delHead(Node* &head){
        if (head == nullptr){
            return;
        }
        Node* tmp = head;
        if (head->next==head){
            head=nullptr;
            delete tmp;
            return;
        }
        
        while (head->next!=tmp){
            head = head->next;
        }
        head->next = tmp->next;
        head = head->next;
        delete tmp;
    }

    void delTail(Node* &head){
        if (head == nullptr){
            return;
        }
        Node* tmp = head;
        if (head->next==head){
            head=nullptr;
            delete tmp;
            return;
        }
        while (tmp->next->next!=head){
            tmp = tmp->next;
        }
        Node* toDel = tmp->next;
        tmp->next = head;
        delete toDel;
    }

    void del(Node* &head, int index){
        index = (index<0? -index: index); 
        if ((index==0) || (head==nullptr) || (head->next==head)){
            delHead(head);
            return;
        }
        if (index>=(size(head)-1)){
            delTail(head);
            return;
        }
        Node* tmp=head;
        while (index!=1){
            tmp=tmp->next;
            index--;
        }
        Node* toDel = tmp->next;
        tmp->next = toDel->next;
        delete toDel;
    }

};

int main(){

    Node* head = nullptr;
    (*head).display(head);
    (*head).insertTail(head, 2);
    (*head).display(head);
    (*head).insertHead(head, 0);
    (*head).display(head);
    (*head).insertTail(head, 3);
    (*head).display(head);
    (*head).insert(head, 1, 1);
    (*head).display(head);
    (*head).insert(head, 4, -4);
    (*head).display(head);
    (*head).insert(head, 5, 7);
    (*head).display(head);
    (*head).insert(head, 6, 0);
    (*head).display(head);
    int len = (*head).size(head);
    for (int i=0; i<len; i++){   
        (*head).del(head, 1);
        (*head).display(head);
    }

    return 0;
}