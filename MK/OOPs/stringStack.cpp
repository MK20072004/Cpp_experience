#include<iostream>
#include<stack>
using namespace std;

string reverse(string s){
    stack<string> st;

    for (int i=0; i<s.size(); i++){
        string word="";
        while (s[i]!=' ' && i!=s.size()){
            word += s[i];
            i++;
        }
        st.push(word);
    }
    string reverseS="";
    int len = st.size();
    for (int i=len-1; i>=0; i--){
        reverseS += st.top()+' ';
        st.pop();
    }
    return reverseS;
}

int main(){

    string s;
    getline(cin, s);
    cout<<reverse(s)<<endl;

    return 0;
}