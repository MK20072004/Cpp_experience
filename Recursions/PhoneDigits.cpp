#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string keypadArr[]= {"", "./", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phoneDigits(string str, string ans=""){
    if (str.size()==0){
        cout<<ans<<endl;
        return;
    }
    string letters= keypadArr[stoi(str.substr(0,1))];
    for (int i=0; i<letters.size(); i++){
        phoneDigits(str.substr(1), ans+letters[i]);
    }  
}

int main(){

    string s;
    getline(cin, s);
    phoneDigits(s);    


    return 0;
}