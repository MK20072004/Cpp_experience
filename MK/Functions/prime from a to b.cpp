#include<iostream>
using namespace std;

void prime(int n, int a) {
    int b;
    for (n; n<=a; n++) {
        for (b=2; b<n; b++) {
            if (n%b==0) {
                break;
            }
        } if (n==b) {cout<<n<<" ";}
    } return;
}

int main(){

    int f,l;
    cin>>f>>l;

    prime(f,l);

    return 0;
}
// another code for samething

//#include<iostream>
//using namespace std;

//bool prime (int t) {
//    for (int b=2; b<t; b++) {
//        if (t%b==0)
//        return false;
//    }
//    return true;
//}

//int main(){

//    int n,a;
//    cin>>n>>a;

//    for (n; n<=a; n++) {
//        if (prime(n)) {cout<<n<<" ";}
//    }

//    return 0;
//}