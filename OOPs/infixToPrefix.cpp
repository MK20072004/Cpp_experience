#include<iostream>
#include<stack>
using namespace std;

int precedence(char op){
    if (op=='^'){
        return 3;
    }
    else if(op=='*' || op=='/'){
        return 2;
    }
    else if(op=='+' || op=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string infixToPrefix(string s){
    stack<char> st;
    string prefix;

    for (int i=s.size()-1; i>=0; i--){
        if (s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty() && st.top()!=')'){
                prefix = st.top()+prefix;
                st.pop();
            }
            if (!st.empty()){
                st.pop();
            }
        }
        else if ((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            prefix = s[i]+prefix;
        }
        else{
            while(!st.empty() && (precedence(st.top())>=precedence(s[i]))){
                prefix = st.top()+prefix;
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        prefix = st.top()+prefix;
        st.pop();
    }
    return prefix;
}

int main(){
    
    string s;
    cin>>s;
    string prefix = infixToPrefix(s);    
    cout<<prefix;
    
    return 0;
}