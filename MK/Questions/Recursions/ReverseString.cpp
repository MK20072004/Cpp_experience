#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// void stringreverse(string str, int len){
//     if(len==1){
//         cout<<str[str.size()-1];
//         return;
//     }
//     stringreverse(str, len-1);
//     cout<<str[str.size() - len];
//     return;
// }

void stringreverse(string s){
    if (s.size()==0){                    //base case;
        return;
    }

    string ros = s.substr(1);
    stringreverse(ros);
    cout<<s[0];
    return;

}

int main(){

    string s1;
    getline(cin, s1);
    //stringreverse(s1, s1.size());                 //for first function;
    stringreverse(s1);

    return 0;
}