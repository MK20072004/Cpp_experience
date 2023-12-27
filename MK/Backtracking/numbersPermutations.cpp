#include<iostream>
#include<vector>
#include<algorithm>     //added for sort;
using namespace std;

vector<vector<int>> answer;

void allPermutations(vector<int> &num, int index, int n){
    if (index==n){
        answer.push_back(num);
        return;
    }
    for (int i=index; i<n; i++){
        /*(i-1) used as it checks if element same so that no duplicates formed*/
        if (num[i]==num[i-1] && i!=index){
            continue;
        }
        swap(num[i], num[index]);
        allPermutations(num, index+1, n);
        swap(num[i], num[index]);
    }
}

int main(){

    int n;
    cin>>n;
    vector<int> num(n);
    for (auto &el: num){
        cin>>el;
    }
    sort(num.begin(), num.end());
    allPermutations(num, 0, n);
    for (auto el: answer){
        for (auto number: el){
            cout<<number;
        }
        cout<<endl;
    }

    return 0;
}