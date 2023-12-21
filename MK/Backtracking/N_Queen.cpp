#include<iostream>
using namespace std;

void make(int** soln, int num, int x, int y, int row){
    int step=1;
    soln[x][y]+=(num*(-1));
    for (int i=x+1; i<row; i++){
        soln[i][y]+=num;
        if (y+step<row){
            soln[i][y+step]+=num;
        }
        if (y-step>=0){
            soln[i][y-step]+=num;
        }
        step++;
    }
}

bool Queen(int n, int** soln, int i=0){

    if (i==n){
        return true;
    }

    for (int j=0; j<n; j++){
        if (soln[i][j]==0){
            make(soln, 1, i, j, n);
            if (Queen(n, soln, i+1)){
                return true;
            }
            make(soln, -1, i, j, n);
        }
    }

    return false;

}

int main(){

    int n;
    cin>>n;
    int** soln=new int*[n];
    for (int i=0; i<n; i++){
        soln[i]=new int[n];
        for (int j=0; j<n; j++){
            soln[i][j]=0;
        }
    }

    if (Queen(n, soln)){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (soln[i][j]==-1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"No solution for the problem";
    }

    return 0;
}