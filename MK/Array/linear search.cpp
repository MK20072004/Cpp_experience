#include<iostream>
using namespace std;

//int linearsearch(int num[],int n,int  key) {
//    for (int a=0; a<n; a++) {
//        if (key==num[a]) {return a;}
//    }
//    return -1;
//}

int main(){

    int n;
    cin>>n;

    int num[n];

    for (int a=0; a<n; a++) {
        cin>>num[a];
    }

    int key;
    cin>>key;

// we can also continue by using function stated above and 
//cout<<linearsearch(num, n, key);

    bool flag=true;

    for (int a=0; a<n; a++) {
        if (key==num[a]) {
            flag=false;
            cout<<a;}
    }

    if (flag) {cout<<"key not in num ";}

    return 0;
}