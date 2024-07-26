#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string MoveX(string str){
    if (str.size()==0){
        return "";
    }
    if (str[0]=='x'){
        return MoveX(str.substr(1)) + "x";
    }
    else{
        return str[0] + MoveX(str.substr(1));
    }
}

int main(){

    string s;
    getline(cin, s);
    cout<<MoveX(s);

    return 0;
}