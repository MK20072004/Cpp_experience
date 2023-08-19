#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Number of rows: ";
  cin>>n;
  int l;
  cout<<"Number of columns: ";
  cin>>l;

  for (int i=1; i<=n; i++) {
    for (int a=1; a<=l; a++) {
      if(a<l) {cout<<"*";}
      else if(a=l) {cout<<"*"<<endl;}
    }
  }

  return 0;
}