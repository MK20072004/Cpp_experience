#include<iostream>
#include<stack>
using namespace std;

int precedence(char op){
    if (op=='^'){
        return 3;
    }
    else if (op=='*'||op=='/'){
        return 2;
    }
    else if (op=='+'||op=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string infix="";

    for (int i=0; i<s.size(); i++){
        if (s[i]=='('){
            st.push(s[i]);
        }
        else if (s[i]==')'){
            while(!st.empty() && st.top()!='('){
                infix += st.top();
                st.pop();
            }
            if (!st.empty()){
                st.pop();
            }
        }
        else if ((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            infix += s[i];
        }
        else{
            while(!st.empty() && precedence(st.top())>=precedence(s[i])){
                infix += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        infix += st.top();
        st.pop();
    }
    return infix;
}

int main(){

    string s;
    cin>>s;
    cout<<infixToPostfix(s);

    return 0;
}