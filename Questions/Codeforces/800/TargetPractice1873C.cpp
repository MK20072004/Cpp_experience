#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    cin.ignore();
    for (int i=0; i<t; i++){
        int value=0;
        for (int j=0; j<10; j++){
            string s;
            getline(cin, s);
            for (int k=0; k<10; k++){
                if (s[k]=='X'){
                    if (j==0 || k==9 || k==0 || j==9){
                        value += 1;
                    }
                    else if (j==1 || k==8 || k==1 || j==8){
                        value += 2;
                    }
                    else if (j==2 || k==7 || k==2 || j==7){
                        value += 3;
                    }
                    else if (j==3 || k==6 || k==3 || j==6){
                        value += 4;
                    }
                    else{
                        value += 5;
                    }
                }
            }
        }
        cout<<value<<endl;
    }

    return 0;
}