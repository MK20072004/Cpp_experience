#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int key;
    cin>>key;

    int arr[n][m];                          //matrix input
    for (int a=0; a<n; a++){
        for (int b=0; b<m; b++){
            cin>>arr[a][b];
        }
    }

    int row = 0;
    int column = m-1;
    bool Flag = false;
    while (row<n && column>=0) {             //finding the key
        if (arr[row][column]==key){
            Flag = true;
            break;
        }    
        else if (arr[row][column]>key){
            column--;
        }
        else{
            row++;
        }
    }
    if(Flag){
        cout<<"True";
    }
    else {cout<<"False";}

    return 0;
}