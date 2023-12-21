#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

// int main(){

//     string str;
//     getline(cin, str);
    
//     int maxim=INT_MIN;
//     for (int i=0; i<str.size(); i++){
//         int count=0;
//         for (int j=i; j<str.size(); j++){
//             if (str[i]==str[j]){
//                 count++;
//             }
//         }
//         maxim = max(maxim, count);
//     }

//     cout<<maxim;

//     return 0;
// }

int main(){
    
    string str;
    getline(cin, str);
    int frequency[26];
    
    for (int i=0; i<26; i++){
        frequency[i]=0;
    }
    
    for (int i=0; i<str.size(); i++){
        frequency[str[i]-'a']++;
    }
    
    int maxim=0;
    char ans='a';

    for (int i=0; i<26; i++){
        if (frequency[i]>maxim){
            maxim=frequency[i];
            ans = char(i+97);
        }
    }

    cout<<ans<<endl;
    cout<<maxim<<endl;

    return 0;
}