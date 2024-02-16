#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> mainSt;
    stack<int> otherSt;
   
    public:
   
    queue(){
        cout<<"This is the default constructor of queue class\n";
    }
   
    queue(int x){
        mainSt.push(x);
    }
   
    void push(int x){
        if (otherSt.empty()){
            mainSt.push(x);
            return;
        }
        while(!otherSt.empty()){
            mainSt.push(otherSt.top());
            otherSt.pop();
        }
        mainSt.push(x);
    }
   
    void pop(){
        if (mainSt.empty() && otherSt.empty()){
            cout<<"Queue is empty\n";
            return;
        }
        while(!mainSt.empty()){
            otherSt.push(mainSt.top());
            mainSt.pop();
        }
        otherSt.pop();
    }
   
    int peek(){
        if (mainSt.empty() && otherSt.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        while(!mainSt.empty()){
            otherSt.push(mainSt.top());
            mainSt.pop();
        }
        return otherSt.top();
    }
   
    bool empty(){
        return (mainSt.empty() && otherSt.empty());
    }
};

int main(){
   
    queue q(0);
    q.push(1);
    q.push(2);
    q.pop();
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
   
    while(!q.empty()){
        cout<<q.peek()<<"  ";
        q.pop();
    }
    cout<<endl;
    q.pop();
   
    return 0;
}