#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);                               // v = [1]
    v.push_back(2);                               // v = [1,2]
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    // for (auto element:v){
    //     cout<<element<<endl;
    // }
    vector<int>::iterator it;                   // pointer for v
    for(it= v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
    v.pop_back();                                   // v = [1]
    vector<int> v2 (3, 50);                         // v2 = [50, 50, 50]
    for(auto element:v2){
        cout<<element<<endl;
    }
    swap(v, v2);                                // v = [50, 50, 50],  v2 = [1]
    for (it=v.begin(); it<v.end(); it++){
        cout<<*it<<endl;
    }
    for (it=v2.begin(); it<v2.end(); it++){
        cout<<*it<<endl;
    }

    v.push_back(23);
    v.push_back(9);
    v.push_back(99);
    v.push_back(2);

    sort(v.begin(), v.end());
    cout<<"Sorted v: ";
    for (auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}