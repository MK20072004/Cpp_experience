#include<iostream>
using namespace std;

void towerofhanoi(int n, char source, char auxillary, char destination){
    if (n==0){
        return;
    }
    towerofhanoi(n-1, source, destination, auxillary);          //take n-1 to auxillary
    cout<<"Move from "<<source<<" to "<<destination<<endl;      //take last one from source to destination
    towerofhanoi(n-1, auxillary, source, destination);          //take all left from auxillary to destination
}

int main(){

    int n;
    cin>>n;
    towerofhanoi(n, 'A', 'B', 'C');

    return 0;
}