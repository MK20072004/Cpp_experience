#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void substrings(string str, string ans=""){
    if (str.size()==0){
        cout<<ans<<endl;
        return;
    }
    substrings(str.substr(1), ans);
    substrings(str.substr(1), ans+str[0]);
}

int main(){

    string s;
    getline(cin, s);
    substrings(s);

    return 0;
}