#include<iostream>
#include<climits>
using namespace std;

int main(){ 

    int n;
    cin>>n;

    int kids[n];

    for (int a=0; a<n; a++) {
        cin>>kids[a];
    }

    int maxima=INT_MIN;

    for (int a=0; a<n; a++) {
        maxima=max(maxima,kids[a]);
    }
    for (int a=0; a<n; a++) {
        if (maxima==kids[a]) {cout<<"The kid with the maximum candies is the "<<(a+1)<<"th kid \n";}
    }


    return 0;
}