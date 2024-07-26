#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

    string num;
    getline(cin, num);
    //can be done in one line by            sort(num.begin(), num.end(), greater<int>());
    string largest_number="";
    int length=num.length();

    for (int i=0; i<length; i++){

        int maxim= INT_MIN;
        int index;
        
        for (int j=0; j<num.size(); j++){
            int x = stoi(num.substr(j, 1));
            if (x>maxim){
                maxim=x;
                index=j;
            }
        }

        largest_number += to_string(maxim);
        num.erase(index, 1);
    }

    cout<<largest_number<<endl;

    return 0;
}