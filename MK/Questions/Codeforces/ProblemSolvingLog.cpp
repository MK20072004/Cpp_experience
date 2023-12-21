#include<iostream>
using namespace std;

int main(){

    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        int time;
        cin>>time;
        string s;
        cin>>s;
        int arr[26]={0};
        for (int j=0; j<s.size(); j++){
            arr[((int)s[j])-((int)'A')]++;
        }
        int total = 0;
        for (int j=0; j<26; j++){
            if (arr[j]>=(j+1)){
                total++;
            }
        }
        cout<<total<<endl;
    }

    return 0;
}