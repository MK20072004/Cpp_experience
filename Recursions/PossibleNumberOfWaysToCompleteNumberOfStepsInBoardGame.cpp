#include<iostream>
using namespace std;

int Possible(int start, int end){
    if (start==end){
        return 1;
    }

    int count=0;

    for (int i=1; i<7; i++){
        if (start+i>end){
            break;
        }
        count += Possible(start+i, end);
    }
    return count;
}

int main(){
    
    int st, ed;
    cin>>st>>ed;
    cout<<Possible(st, ed)<<endl;

    return 0;
}