#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;

   for (int a=1; a<=n; a++) {
    for (int i=1; i<=a; i++) {cout<<"*";}
    for (int j=1; j<= (n-a)*2; j++) {cout<<" ";}
    for (int i=1; i<=a; i++) {cout<<"*";}
   cout<<endl;
   }
   for (int a=n; a>=1; a--) {
    for (int i=1; i<=a; i++) {cout<<"*";}
    for (int j=1; j<= (n-a)*2; j++) {cout<<" ";}
    for (int i=1; i<=a; i++) {cout<<"*";}
   cout<<endl;
   }

    return 0;
}