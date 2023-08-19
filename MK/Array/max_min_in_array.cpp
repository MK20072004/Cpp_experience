#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];

    for(int a=0; a<n; a++) {
        cin>>array[a];
    }

    int maxim=INT_MIN;
    int minim=INT_MAX;

    for (int a=0; a<n; a++) {
        maxim=max(maxim,array[a]);                 //if (array[a]>maxim) {maxim=array[a];}
        minim=min(minim,array[a]);                 //if (array[a]<minim) {minim=array[a];}
    }
    cout<<maxim<<endl;
    cout<<minim<<endl;

    return 0;
}