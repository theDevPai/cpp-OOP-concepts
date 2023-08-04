//stack class with push pop and peek functions
#include<iostream>
using namespace std;

class Stack
{
    private:
    int a[10];
    int i=0;

    public:
    void set_data()
    {
        cout<<"STACK IS BEING BUILT....";
        cout<<endl<<"SIZE OF THE STACK IS 10.";
    }

    void push(int num)
    {
        if(i<10)
        {
            i++;
            a[i]=num;
            cout<<endl<<"Element "<<num<<" pushed into stack";
        }
        else{
            cout<<"Stack overflow";
        }
    }

    void pop()
    {
        if(i<0)
        {
            cout<<"Stack underflow";
        }
        else{
            cout<<endl<<"Element "<<a[i]<<" popped from the stack";
            i--;
        }
    }

    void peek()
    {
        if(i<0)
        {
            cout<<"Empty stack";
        }
        else{
            cout<<endl<<a[i]<<" is the top element of the stack";
        }
    }
};

int main()
{
    Stack s1;
    s1.set_data();
    s1.push(10);
    s1.push(8);
    s1.push(9);
    s1.push(16);
    s1.pop();
    s1.pop();
    s1.push(21);
    s1.pop();
    s1.peek();

    return 0;
}