#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int arr[n][m];
    
    for (int i=0; i<n; i++){                        //input matrix
        for (int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int startingrow=0;          //n
    int endcolumn=m-1;          //m
    int endrow=n-1;             //n
    int startingcolumn=0;       //m
    int element=n*m;

    while (startingcolumn<=endcolumn && startingrow<=endrow) { 
        if (element!=0){ 
            for (int a=startingcolumn; a<=endcolumn; a++){   //left to right
                cout<<arr[startingrow][a]<<" ";
                element--;
            }
            startingrow++;
        }

        if (element!=0){
            for (int a=startingrow; a<=endrow; a++){          //top to bottom
                cout<<arr[a][endcolumn]<<" ";
                element--;
            }
            endcolumn--;
        }

        if (element!=0){
            for (int a=endcolumn; a>=startingcolumn; a--){      //right to left
                cout<<arr[endrow][a]<<" ";
                element--;
            }
            endrow--;
        }

        if (element!=0){
            for (int a=endrow; a>=startingrow; a--) {          //bottom to top
                cout<<arr[a][startingcolumn]<<" ";
                element--;
            }
            startingcolumn++;
        }
    }
    cout<<endl<<"done";

    return 0;
}