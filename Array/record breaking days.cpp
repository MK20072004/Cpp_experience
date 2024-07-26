#include<iostream>  
#include<climits>
using namespace std;

int main(){
                      //record breaking days - 2 conditions arr[count]>max && arr[count]>arr[count+1]
    int n;
    cin>>n;
    int arr[n];
    for (int a=0;a<n;a++) {
        cin>>arr[a];          //can also use arr[n+1] and assign arr[n] as -ve number then you would not have to use the second statement in if.
    }
    int mx=INT_MIN;
    int RBDAY=0;
    int count=0;
    while(count<n) {
        if ((arr[count]>mx && arr[count]>arr[count+1]) || (arr[count]>mx && count==n-1)) {
            RBDAY++;
        }
        mx=max(mx,arr[count]);

        count++;
    }
    cout<<RBDAY;

    return 0;
}