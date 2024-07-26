#include<iostream>
using namespace std;

// int main(){

//     int num;
//     cin>>num;
//     int i=1;
//     int power=0;
//     while (i<num){
//         i*=2;
//         power++;
//     }
//     int count=0;
//     for (int a=0; a<=power; a++){
//         if (num & 1<<a){
//             count++;
//         }
//     }
//     cout<<count<<endl;

//     return 0;
// }

int number_of_ones(int num){
    int count=0;
    while ((num)){
        count++;
        num=(num & num-1);
    }
    return count;
}

int main(){
    
    int num;
    cin>>num;
    cout<<number_of_ones(num)<<endl;

    return 0;
}