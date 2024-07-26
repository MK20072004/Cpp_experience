#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;
    for (int i=0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        bool flag = true;
        for (int j=0; j<n; j++){
            cin>>a[j];
            b[j]=1;
        }
        int count=0;
        for (int j=0; j<n; j++){
            for (int k=j+1; k<n; k++){
                if (a[j] == a[k] && a[j]!=count){
                    if (count==0){
                        b[k]=2;
                        count = a[j];
                        continue;
                    }
                    else{
                        b[k]=3;
                        flag=false;
                    }
                }
            }
        }
        if (flag){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            for (int j=0; j<n; j++){
                cout<<b[j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}