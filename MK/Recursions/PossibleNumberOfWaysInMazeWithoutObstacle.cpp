#include<iostream>
using namespace std;

int possible(int x1, int x2, int e1, int e2){
    if (x1==e1 && x2==e2){
        return 1;
    }
    // int count=0;
    // if (x1<e1){
    //     count += possible(x1+1, x2, e1, e2);
    // }
    // if (x2<e2){
    //     count += possible(x1, x2+1, e1,e2);
    // }
    // return count;

    if (x1>e1 || x2>e2){
        return 0;
    }

    return possible(x1+1, x2, e1, e2) + possible(x1, x2+1, e1, e2);
}

int main(){

    int x1,x2,e1,e2;
    cin>>x1>>x2>>e1>>e2;
    cout<<possible(x1, x2, e1, e2)<<endl;

    return 0;
}