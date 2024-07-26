#include<iostream>
using namespace std;

int main(){

float num1;
cout<<"numerator is: ";
cin>> num1;

float num2;
cout<<"denominator is: ";
cin>> num2;

float perc = num1/num2 *100;
cout<<"the percentage is " <<perc <<"%";

    return 0;
}