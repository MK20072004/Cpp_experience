#include<iostream>
using namespace std;

bool pythogarus(int n, int i, int j) {
    if ((n*n)+(i*i)==(j*j) || (n*n)+(j*j)==(i*i) || (j*j)+(i*i)==(n*n)) {return true;}
    return false; 
}

int main(){

    int n,i,j;
    cin>>n>>i>>j;

    if (pythogarus(n,i,j)) {cout<<"It is a pythagorean triplet ";}
    else {cout<<"It is not a pythagorean triplet ";}

    return 0;
}