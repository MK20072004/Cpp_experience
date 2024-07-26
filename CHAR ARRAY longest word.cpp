#include <iostream>
#include<climits>
using namespace std;

int main() {

    char arr[100];
    std::cin.getline(arr, 100);
    

    int maxim= INT_MIN;
    int count=0;
    int start=0;
    int end=0;
    int next=0;

    for (int a=0; a<100; a++){
      if (arr[a]=='\0'){
        if (count>maxim){
          start=next;
          end=a-1;
          maxim=count;
        }
        count=0;
        next=a+1;
        break;
      }
      if (arr[a]==' '){
            if (count>maxim){
              start=next;
              end=a-1;
              maxim=count;
            }
            count=0;
            next=a+1;
      }
      else{
            count++;
      }
    }
    cout<<maxim<<endl;
    for (int a=start; a<=end; a++){
      cout<<arr[a];
    }

    return 0;
}