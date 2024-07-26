#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int a=0; a<n; a++){   //how to take input in 2-D array.
        for (int b=0; b<n; b++){
            cin>>arr[a][b];
        }
    }

    int x;  //number to find 
    cin>>x;

    // cout<<"Matrix is: \n";
    // for (int a=0; a<n; a++){   //how to output the matrix(2-D array)
    //     for (int b=0; b<n; b++){
    //         cout<<arr[a][b]<<" ";
    //     }
    //     cout<<endl;
    // }

    bool flag=true;
    for (int a=0; a<n; a++){   //how to output the matrix(2-D array)
        for (int b=0; b<n; b++){
            if (arr[a][b]==x){
                cout<<"Found the element: "<<endl<<"Co-ordinates are "<<a<<" "<<b;
                flag=false;
            }
        }
    }

    if (flag){
        cout<<"Element not found \n";
    }

    return 0;
}