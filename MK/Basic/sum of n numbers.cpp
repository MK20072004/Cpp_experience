#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int sum=0;
for(int counter=1; counter<=n;counter++) {
    sum=sum+counter;
}
cout<<sum ;


//alternate code can be cout<<n*(n+1)/2 but did not use because this code was for learning loops.


    return 0;
}
