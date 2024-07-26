#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
                        //turns string to uppercase.       //transform(string_name.begin(), string_name.end(), string_name.begin(), ::toupper);

int main(){

    string s1;
    getline(cin, s1);
    // string up_case="";
    // string low_case="";

    // for (int i=0; i<s1.length(); i++){                              //loop to make Uppercase string
    //     int ascii_value = (int)s1[i];
    //     if (ascii_value >= 95 && ascii_value <= 122){
    //         ascii_value -= 32;
    //         up_case += char(ascii_value);
    //     }
    //     else{
    //         up_case += char(ascii_value);
    //     }
    // }

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;

    // for (int i=0; i<s1.length(); i++){                              //loop to make Lowercase string
    //     int ascii_value = (int)s1[i];
    //     if (ascii_value >= 65 && ascii_value <= 90){
    //         ascii_value += 32;
    //         low_case += char(ascii_value);
    //     }
    //     else{
    //         low_case += char(ascii_value);
    //     }
    // }
    // cout<<up_case<<endl;
    // cout<<low_case<<endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1<<endl;

    return 0;
}