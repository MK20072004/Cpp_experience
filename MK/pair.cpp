#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool my_compare(pair<int, int> p1, pair<int,int> p2){
    return p1.first<p2.first;
}


int main(){

    // pair<int, int> p;
    // p.first = 3;
    // p.second = 2;
    
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector< pair<int, int> > reduced;
    for (int i=0; i<n; i++){
        reduced.push_back(make_pair(arr[i], i));         // alternate code given below.
        // pair <int, int> p;
        // p.first = arr[i];
        // p.second = i;
        // reduced.push_back(p);
    }
    sort(reduced.begin(), reduced.end(), my_compare);
    for (int i=0; i<n; i++){
        arr[reduced[i].second] = i;
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}