#include<iostream>
using namespace std;

int binarytodecimal(int n) {
    int ans=0;
    int a=1;
    while (n>0) {
        int y = (n%10);
        ans += (a*y);
        a *= 2;
        n /= 10;
    }
    return ans;
}

int octaltodecimal(int n) {
    int ans=0;
    int a=1;
    while (n>0) {
        int y= n%10;
        ans += (a*y);
        a *= 8;
        n /= 10;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<binarytodecimal(n)<<endl;
    cout<<octaltodecimal(n)<<endl;

    return 0;
}