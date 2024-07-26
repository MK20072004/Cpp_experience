#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){
    stack<char> st;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if (s[i]==')'){
            if (st.empty()){
                return false;
            }
            if (st.top()!='('){
                return false;
            }
            st.pop();
        }
        else if (s[i]==']'){
            if (st.empty()){
                return false;
            }
            if (st.top()!='['){
                return false;
            }
            st.pop();
        }
        else if (s[i]=='}'){
            if (st.empty()){
                return false;
            }
            if (st.top()!='{'){
                return false;
            }
            st.pop();
        }
    }
    if (!st.empty()){
        return false;
    }
    return true;
}

int main(){

    string s;
    cin>>s;
    if (isValid(s)){
        cout<<"String is valid\n";
    }
    else{
        cout<<"String Not Valid: Unbalanced Paranthesis\n";
    }

    return 0;
}