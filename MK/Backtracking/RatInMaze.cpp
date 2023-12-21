#include<iostream>
using namespace std;

bool IsSafe(int**arr, int m, int n, int x, int y){
    if (x<m && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool RatInMaze(int** arr, int m, int n, int** solArr, int x=0, int y=0){
    if (x==m-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    
    if (IsSafe(arr, m, n, x, y)){
        solArr[x][y]=1;
        if (RatInMaze(arr, m, n, solArr, x+1, y)){
            return true;
        }
        if (RatInMaze(arr, m, n, solArr, x, y+1)){
            return true;
        }
        solArr[x][y]=0;
        return false;
    }
    return false;
}

int main(){

    int m,n;
    cin>>m>>n;
    int** arr=new int*[m];
    for (int i=0; i<m; i++){
        arr[i]=new int[n];
    }
    bool flag=true;

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
            if (!(arr[i][j]==0 || arr[i][j]==1)){
                cout<<"Error: Input given should be either one or zero."<<endl;
                flag = false;
                break;
            }
        }
    }

    int** solArr=new int*[m];
    for (int i=0; i<m; i++){
        solArr[i]=new int[n];
        for (int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }

    if (flag){
        if (RatInMaze(arr, m, n, solArr)){
            for (int i=0; i<m; i++){
                for (int j=0; j<n; j++){
                    cout<<solArr[i][j]<<"  ";
                }
                cout<<endl;
            }
        }
    }

    return 0;
}