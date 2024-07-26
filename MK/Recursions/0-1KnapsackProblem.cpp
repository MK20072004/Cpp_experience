#include<iostream>
using namespace std;

int knapsack(int items, int weight, int w[], int v[], int value=0){
    if (items<0 || weight==0){
        return value;
    }
    if (w[items]>weight){
        return knapsack(items-1, weight, w, v, value);
    }
    return max(knapsack(items-1, weight-w[items], w, v, value+v[items]), knapsack(items-1, weight, w, v, value));
}

int main(){

    int n, weight;
    cin>>weight;
    cin>>n;
    int v[n];
    int w[n];
    for (int i=0; i<n; i++){
        cin>>w[i]>>v[i];
    }
    cout<<knapsack(n-1, weight, w, v);

    return 0;
}