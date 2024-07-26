#include<iostream>
using namespace std;

class queue{
    int* arr;
    int front = -1;
    int back = -1;
    int size;

    public:

    queue(int n){
        arr = new int[n];
        size = n;
    }

    ~queue(){
        cout<<"This is the destructor of queue class\n";
    }

    /*Enqueue*/
    void push(int x){
        if(++back==size){
            cout<<"Queue overflow\n";
            back--;
            return;
        }
        arr[back] = x;
        if (front==-1){
            front++;
        }
    }

    /*Dequeue*/
    void pop(){
        if (front==-1 || front>back){
            cout<<"Queue is empty\n";
            return;
        }
        front++;
    }

    /*finding first in queue*/
    int peek(){
        if (front==-1 || front>back){
            cout<<"Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if (front==-1 || front>back){
            return true;
        }
        return false;
    }
};

int main(){

    queue q(10);
    q.push(0);
    q.push(1);
    q.push(2);
    while(!q.empty()){
        cout<<q.peek()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}