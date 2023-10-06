#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int a=0; a<n; a++){
        for (int b=0; b<m; b++){
            cin>>arr[a][b];
        }
    }

// ''' only works for square matrix'''

    // for(int a=1; a<n; a++){
    //     for (int b=0; b<a; b++){
    //         int c= arr[a][b];
    //         arr[a][b]=arr[b][a];
    //         arr[b][a]=c;
    //     }
    // }

    int arr_tr[m][n];

    for(int a=0; a<n; a++){
        for (int b=0; b<m; b++){
            arr_tr[b][a] = arr[a][b];
        }
    }

    for(int a=0; a<m; a++){
        for (int b=0; b<n; b++){
            cout<<arr_tr[a][b]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}