#include<iostream>
using namespace std;

int main(){

    int row,column;
    cout<<"Number of rows: ";
    cin>>row;
    cout<<"Number of columns: ";
    cin>>column;

    for (int a=1; a<=row; a++) {
        for (int b=1; b<=column; b++) {
            if (a==1 || a==row || b==1 || b==column) {cout<<"* ";}
            else {cout<<"  ";}
        } cout<<endl;
    }

    return 0;
}