#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void SubstringWithAscii(string s, string ans=""){
    if (s.size()==0){
        cout<<ans<<endl;
        return;
    }
    SubstringWithAscii(s.substr(1), ans);
    SubstringWithAscii(s.substr(1), ans+s[0]);
    SubstringWithAscii(s.substr(1), ans+to_string(int(s[0])));
}

int main(){

    string s;
    getline(cin, s);
    SubstringWithAscii(s);

    return 0;
}