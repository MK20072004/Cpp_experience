#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int calculate(char operand, int a, int b){
    switch(operand){
        case '+':{
            return a+b;
        }
        case '-':{
            return a-b;
        }
        case '*':{
            return a*b;
        }
        case '/':{
            if (b==0){
                cout<<"Invalid Division: Division by zero/n";
                return a;
            }
            else{
                return a/b;
            }
        }
        case '^':{
            return pow(a, b);
        }
        default:{
            cout<<"Invalid Operand: "<<operand<<endl;
            return a;
        }
    }
}

int prefix(string s){
    stack<int> st;
    for (int i=s.size()-1; i>=0; i--){
        if (s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(calculate(s[i], a, b));
        }
    }
    return st.top();
}

int postfix(string s){
    stack<int> st;
    for (int i=0; i<s.size(); i++){
        if (s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            st.push(calculate(s[i], a, b));
        }
    }
    return st.top();
}

int main(){

    string s;
    cin>>s;
    string toDo;
    cin>>toDo;
    if (toDo[1]=='r' || toDo[1]=='R'){
        cout<<prefix(s)<<endl;
    }
    else{
        cout<<postfix(s)<<endl;
    }

    return 0;
}