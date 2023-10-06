#include<iostream>
using namespace std;

int main(){

    int n1,n2,m;
    cin>>n1>>n2>>m;

    int arr_in_1[n1][n2];                              //input first matrix
    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            cin>>arr_in_1[i][j];
        }
    }

    int arr_in_2[n2][m];                               //input second matrix      
    for (int i=0; i<n2; i++){
        for (int j=0; j<m; j++){
            cin>>arr_in_2[i][j];
        }
    }

    int arr_out[n1][m];
    for (int i=0; i<n1; i++){                          // making elements zero so that in next step in first iteration it adds zero keeping ans same
        for (int j=0; j<m; j++){
            arr_out[i][j]=0;
        }
    }

    for (int a=0; a<n1; a++){
        for (int b=0; b<m; b++){
            for (int i=0; i<n2; i++){ 
            arr_out[a][b] += (arr_in_1[a][i] * arr_in_2[i][b]);
            }
        }
    }
     
    for (int i=0; i<n1; i++){                          //output multiplied matrix
        for (int j=0; j<m; j++){
            cout<<arr_out[i][j]<<"  ";
        }
        cout<<endl;
    }


    return 0;
}