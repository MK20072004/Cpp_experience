#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    int n;
        cin>>n;
        for (int a=0; a<n; a++){
            string s1,s2;
            cin>>s1>>s2;
            s1 = s1+s2;                                         // Take up inputs as two strings ==> integer part + "space" + after decimal point
            long long int den= 100000000;                       // After decimal point part should be 8 spaces long.
            long long int num = stoll(s1);
            long long int factor=0;
            while (factor!=1){
                factor=1;
                for (int a=2; a<=den; a++){
                    if(num%a==0 && den%a==0){
                        factor=a;
                        break;
                    }
                }
                num/=factor;
                den/=factor;
            }
            cout<<num<<" "<<den<<endl;
        }

    return 0;
}