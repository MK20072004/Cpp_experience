#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> mainSt;
    
    public:
    
    queue(){
        cout<<"This is the default constructor of queue class\n";
    }
    
    queue(int x){
        mainSt.push(x);
    }
    
    void push(int x){
        mainSt.push(x);
    }
    
    void pop(){
        if (mainSt.empty()){
            cout<<"Queue is empty\n";
            return;
        }
        if (mainSt.size()==1){
            mainSt.pop();
            return;
        }
        int temp = mainSt.top();
        mainSt.pop();
        pop();
        mainSt.push(temp);
    }
    
    int peek(){
        if (mainSt.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        if (mainSt.size()==1){
            return mainSt.top();
        }
        int temp = mainSt.top();
        mainSt.pop();
        int ans = peek();
        mainSt.push(temp);
        return ans;
    }
    
    bool empty(){
        return (mainSt.empty());
    }
};

int main(){
    
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    while(!q.empty()){
        cout<<q.peek()<<"  ";
        q.pop();
    }
    cout<<endl;
    
    return 0;
}