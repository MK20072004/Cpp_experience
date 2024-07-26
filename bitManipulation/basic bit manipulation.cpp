#include<iostream>
using namespace std;

int getbit(int num, int position){
    return (num & 1<<position)!=0;
}

int setbit(int num, int position){
    return (num | 1<<position);
}

int clearbit(int num, int position){
    return (num & ~(1<<position));
}

// int updatebit(int num, int position, int bit){
//     if (bit==0){
//         return clearbit(num, position);
//     }
//     else{
//         return setbit(num, position);
//     }
// }

int updatebit(int num, int position, int value){
    int mask = ~(1<<position);
    num = num & mask;
    return (num | (value<<position));
}

int main(){

    cout<<getbit(5,2)<<endl;
    cout<<setbit(5, 1)<<endl;
    cout<<clearbit(5, 0)<<endl;
    cout<<updatebit(5, 1, 1)<<endl;
    cout<<updatebit(5, 2, 1)<<endl;
    cout<<updatebit(5, 2, 0);

    return 0;
}