#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
                                nameofstring.clear() 
                                nameoffirststring.compare(otherstring)  
                                getline(cin, nameofstring)
                                nameofstring.empty()                                                            ////tells if string is empty
                                nameofstring.erase(first_index_to_delete, number_of_elements_to_delete)
                                nameofstring.find("")                                                           ////gives index of first element;
                                nameofstring.insert(index, "string to insert");
                                nameofstring.size()                                                   ////gives length of string //size or length both can be used;
                                nameofstring.substr(index, number_of_elements)
                                stoi(nameofstring)                                                              ////gives integer of string;
                                to_string(variable)                                                             ////gives string from variable;
                                sort(nameofstring.begin(), nameofstring.end())                                  ////sorts the string;
int main(){

    // string str;
    // getline(cin, str);
    // // str.clear();                     //clears string;
    // cout<<str<<endl;
    // // string str1(5, 'n');                     // one type of string declaration;
    // // cout<<str1<<endl;

    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);                           //ways
    // cout<<s1+s2<<endl;

    // if (s1.compare(s2)==0){                               //if(!s1.compare(s2)){}                //Comparing 2 strings if equal or not;
    //     cout<<"string are equal "<<endl;
    // }
    // else{
    //     cout<<s1.compare(s2)<<endl;
    // }
    
    // if (!s1.empty()){
    //     cout<<"String is not empty"<<endl;
    // }

    // string str1= "nincompoop";
    // str1.erase(3, 3);
    // cout<<str1<<endl;
    // cout<<str1.find("com")<<endl;                //find function
    
    // str1.insert(2," lol ");                      //insert function
    // cout<<str1<<endl;

    // cout<<str1.length()<<endl;                   //lenght or size function
    // cout<<str1.substr(4, 3)<<endl;

    // string number="980";                         //integer from string
    // int x= stoi(number);
    // cout<<x+2<<endl;
    
    // int y= 4435;                                 //string from integer
    // cout<<to_string(y)+"23"<<endl;

    string strin1= "fioguhklasj";
    sort(strin1.begin(), strin1.end());             //sort function
    cout<<strin1<<endl;


    return 0;
}