#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;

    public:

    stack(){
    }

    stack(int x){
        q1.push(x);
    }

    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> tmp=q1;
        q1 = q2;
        q2 = tmp;
    }

    void pop(){
        if (q1.empty()){
            cout<<"Stack is empty\n";
            return;
        }
        q1.pop();
    }

    int top(){
        if (q1.empty()){
            cout<<"Stack is empty\n";
            return -1;
        }
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }
};

int main(){
    
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        cout<<st.top()<<"  ";
        st.pop();
    }
    cout<<endl;
    st.pop();

    return 0;
}