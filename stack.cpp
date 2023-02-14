#include <iostream>
#include <string>
//Stack implementation using array.
using namespace std;

class Stack{
    private:
        int a[5];
        int top;
    
    public:
        Stack(){
            top=-1;
            for(int i=0;i<5;i++){
                a[i]=0;
            }
    }

    bool isEmpty(){
        if(top==-1) return true;
        return false;
    }
    bool isFull(){
        if(top==4) return true;
        return false;
    }

    void push(int val){
        if(isFull()){
            cout<<"Stack is Overflow\n";
        }
        else{
            top++;
            a[top]=val;
        }
    }

    int pop(){
        if(isEmpty()){

            cout<<"Stack is Underflow\n";
            return 0;
        }
        else{
            int popValue=a[top];
            a[top]=0;
            top--;
            return popValue;
        }
    }
    int count(){
        return (top+1);
    }
    int peek(int pos){
        if(isEmpty()){

            cout<<"Stack is Underflow\n";
            return 0;
        }
        else{
            return a[pos];
        }
    }
    void change(int pos, int val){
        a[pos]=val;
        cout<<"value has been changed\n";
    }
    void display(){
        cout<<"All the value are \n";
        for(int i=4;i>=0;i--) cout<<a[i]<<"\n";
    }
    int toP(){
        if(isEmpty()){
            cout<<"Stack is Underflow\n";
            return 0;
        }
        else{
            return a[top];
        }
    }

};
int main(){

Stack st;
st.push(4);
st.push(7);
st.push(3);
st.display();
st.pop();
st.display();
cout<<st.count()<<"\n";
cout<<st.toP()<<"\n";
st.pop();
st.pop();
st.display();
cout<<st.count()<<"\n";
cout<<st.isFull();

    return 0;
}