#include<iostream>
#include<stack>
using namespace std;

void putBelow(stack<int> &st, int element){
    if (st.empty()){
        st.push(element);
        return;
    }
    int nextElement = st.top();
    st.pop();
    putBelow(st, element);
    st.push(nextElement);
}

void reverseStack(stack<int> &st){
    if (st.empty()){
        return;
    }
    int element = st.top();
    st.pop();
    reverseStack(st);
    putBelow(st, element);
}

int main(){

    stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}