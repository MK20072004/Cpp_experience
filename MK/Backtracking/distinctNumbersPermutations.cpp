#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> permutations;

void allPermutations(vector<int> &element, int index){
    if (index==element.size()){
        permutations.push_back(element);
        return;
    }
    for (int i=index; i<element.size(); i++){
        swap(element[i], element[index]);
        allPermutations(element, index+1);
        swap(element[i], element[index]);
    }
}

int main(){

    int n;
    cin>>n;
    vector<int> num(n);
    for (auto &i: num){
        cin>>i;
    }
    allPermutations(num, 0);
    for (auto el: permutations){
        for (auto number: el){
            cout<<number;
        }
        cout<<endl;
    }


    return 0;
}