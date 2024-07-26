#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next=nullptr;

    Node(int x){
        data = x;
    }

    ~Node(){
        cout<<"This is destructor of Node class\n";
    }
};

class queue{

    Node* front=nullptr;
    Node* back=nullptr;

    public:

    queue(){
        cout<<"This is the default constructor of the queue class\n";
    }

    queue(int x){
        front = new Node(x);
        back = front;
    }

    ~queue(){
        cout<<"This is destructor for queue class\n";
    }

    void push(int x){
        if (back==nullptr){
            front = new Node(x);
            back = front;
            return;
        }
        back->next = new Node(x);
        back = back->next;
    }

    void pop(){
        if (front==nullptr){
            cout<<"Queue is empty\n";
            return;
        }
        if (back==front){
            back = nullptr;
        }
        Node* toDelete = front;
        front = front->next;
        delete toDelete;
    }

    int peek(){
        if (front==nullptr){
            cout<<"Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if (front==nullptr){
            return true;
        }
        return false;
    }
};

int main(){

    queue q(0);
    q.push(1);
    q.push(2);
    q.push(3);
    while (!q.empty()){ 
        cout<<q.peek()<<"  ";
        q.pop();
    }

    return 0;
}