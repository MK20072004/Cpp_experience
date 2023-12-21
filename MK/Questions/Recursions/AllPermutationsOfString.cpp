#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void AllPermutationsOfString(string s, string ans=""){
    if (s.size()==0){
        cout<<ans<<endl;
        return;
    }
    for (int i=0; i<s.size(); i++){
        AllPermutationsOfString(s.substr(0,i)+s.substr(i+1), ans+s[i]);
    }
}

int main(){

    string str;
    getline(cin, str);
    AllPermutationsOfString(str);

    return 0;
}