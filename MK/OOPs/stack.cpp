#include<iostream>
using namespace std;

#define defaultSize 10

class stack{

    int* arr;
    int top=-1;
    int size;

    public:
    /*constructors*/
    stack(){
        arr = new int[defaultSize];
        size = 10;
    }
    stack(int n){
        arr=new int[n];
        size = n;
    }

    /*Destructor*/
    ~stack(){
        cout<<"Destructor called\n";
    }

    /*putting element in stack*/
    void push(int value){
        if (top==size-1){
            cout<<"Stack Overflow\n";
            return;
        }
        arr[++top]=value;
    }

    /*removing element from the top*/
    int pop(){
        if (top==-1){
            cout<<"No elements in the stack\n";
            return -1;
        }
        --top;
        return arr[top+1];
    }

    /*size of the stack. Amount of elements it can hold*/
    int len(){
        return size;
    }

    /*returns the top element*/
    int Top(){
        if (top==-1){
            cout<<"No elements in the stack\n";
            return -1;
        }
        return arr[top];
    }

    /*tells if the stack has any element or not*/
    bool empty(){
        return top==-1;
    }

    /*space left in the stack for more items*/
    int spaceLeft(){
        return (size-top-1);
    }

    /*display the whole stack*/
    void display(){
        if (top==-1){
            cout<<"No elements in stack\n";
            return;
        }
        int len = top;
        while (len!=-1){
            cout<<arr[len]<<endl;
            len--;
        }
    }
};

int main(){

    stack st(4);
    cout<<st.len()<<endl;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    for (int i=0; i<5; i++){
        cout<<st.pop()<<endl;
    }
    st.display();

    stack st2;
    cout<<st2.len()<<endl;
/*Destructor of st3 will be called after this block of code below finishes
this is a good way to do as it will be deleted after its intended use;*/
    {
        stack st3;
    }

    return 0;
}