#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    
    public:

    Complex(int r, int i){
        // cout<<"Paremetrized constructor\n";
        real = r;
        imaginary = i;
    }

    Complex(){
        // cout<<"Default constructor\n";
    }

    Complex(const Complex &a){
        // cout<<"Copy constructor\n";
        real = a.real;
        imaginary = a.imaginary;
    }

    ~Complex(){
        // cout<<"Destructor\n";
    }

    void conjugate(){
        real = real;
        imaginary = -imaginary;
    }

    Complex operator + (Complex const &obj){
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        return result;
    }

    Complex operator - (Complex const &obj){
        Complex result;
        result.real = real - obj.real;
        result.imaginary = imaginary - obj.imaginary;
        return result;
    }

    Complex operator * (Complex const &obj){
        Complex result;
        result.real = (obj.real * real) + (obj.imaginary * imaginary);
        result.imaginary = (obj.real * imaginary) + (real * obj.imaginary);
        return result;
    }

    Complex operator / (Complex const&obj){
        Complex result;
        result.real = ((obj.real * real) + (obj.imaginary * imaginary))/((obj.real*obj.real)+(obj.imaginary*obj.imaginary));
        result.imaginary = ((obj.real * imaginary) - (real * obj.imaginary))/((obj.real*obj.real)+(obj.imaginary*obj.imaginary));
        return result;
    }

    void operator *= (Complex const &obj){
        int tmp1 = (obj.real * real) + (obj.imaginary * imaginary);
        int tmp2 = (obj.real * imaginary) + (real * obj.imaginary);
        real = tmp1;
        imaginary = tmp2;
    }

    void operator += (Complex &a){
        real += a.real;
        imaginary += a.imaginary;
    }

    void operator -= (Complex &a){
        real -= a.real;
        imaginary -= a.imaginary;
    }

    bool operator == (Complex &a){
        return ((a.real==real && a.imaginary==imaginary) ? true : false);
    }

    void display(){
        cout<<to_string(real) + (imaginary>=0 ? "+": "") + to_string(imaginary) + "i"<<endl;
    }

};

int main(){

    int real, imag;
    Complex zero(0,0);
    Complex ans = zero;
    int state=0;
    Complex num1, num2;

    cout<<"*****************Complex Numbers Calculator*****************\n";
    do {

        if (state==1){
            num1 = ans;
        }
        else{
            ans = zero;
            cout<<"Enter First Number Real Part: ";
            cin>>real;
            cout<<"Enter First Number Imaginary Part: ";
            cin>>imag;
            Complex temp(real, imag);
            num1 = temp;
        }

        char operand;
        cout<<"Enter Operation you would like to use (+, -, *, /, C(conjugate)): ";
        cin>>operand;
        if (operand=='C' || operand=='c'){
            num1.conjugate();
            ans=num1;
            cout<<endl;
            ans.display();
            cout<<endl;
            cout<<"To clear press: 0\n";
            cout<<"To continue press: 1\n";
            cout<<"To exit press any other number\n";
            cout<<"Enter: ";
            cin>>state;
            if (state!=1 && state!=0){
                break;
            }
            else{
                continue;
            }
        }

        cout<<"Enter Second Number Real Part: ";
        cin>>real;
        cout<<"Enter Second Number Imaginary Part: ";
        cin>>imag;
        Complex temp(real, imag);
        num2 = temp;
    
        switch(operand){
            case '+':{
                ans = num1+num2;
                cout<<endl;
                ans.display();
                cout<<endl;
                break;
            }

            case '-':{
                ans = num1-num2;
                cout<<endl;
                ans.display();
                cout<<endl;
                break;
            }

            case '*':{
                ans = num1*num2;
                cout<<endl;
                ans.display();
                cout<<endl;
                break;
            }

            case '/':{
                ans = num1/num2;
                cout<<endl;
                ans.display();
                cout<<endl;
                break;
            }

            default:{
                cout<<"Error: Please Enter an operand from these(+, -, *, /, C(conjugate))\n";
            }
        }
    
        cout<<"To clear press: 0\n";
        cout<<"To continue press: 1\n";
        cout<<"To exit press any other number\n";
        cout<<"Enter: ";
        cin>>state;
        if (state!=1 && state!=0){
            break;
        }
    
    } while(true);

    cout<<"************************************************************\n";

    return 0;
}