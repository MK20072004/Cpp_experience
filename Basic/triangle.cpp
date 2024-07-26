#include<iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"input\n side a \n"<<"side b \n"<<"side c";
cin>>a>>b>>c;

if(a==b && b==c){cout<<"triangle is equilateral";}
else if(a==b || b==c || c==a) {cout<<"triangle is isosceles";}
else {cout<<"triangle is scalene";}


    return 0;
}