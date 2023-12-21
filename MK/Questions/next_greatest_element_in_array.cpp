#include<iostream>
using namespace std;

int main(){
	int n;								// first input is the number of elements in the array.
	cin>>n;
	int arr[n];
	for (int a=0; a<n; a++){
		cin>>arr[a];
	}

	for (int a=0; a<n; a++){
		int nge=arr[a];
		for (int b=a+1; b<n; b++){		//calculates the next greatest element.
			if (nge<arr[b]){
				nge=arr[b];
			}
		}
		if (nge==arr[a]){				//if no greater element then it prints "-1".
			cout<<-1<<" ";
		}
		else{
			cout<<nge<<" ";				//prints the greatest element after that index point in the array.
		}
	}

}