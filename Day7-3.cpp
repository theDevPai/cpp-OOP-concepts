#include<iostream>
using namespace std;

class Multi_A
{
    public:
    int a,b;

    void set_A()
    {
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
    }
};

class Multi_B
{
    public:
    int c,d;
    void set_B()
    {
        cout<<"Enter the value of c:";
        cin>>c;
        cout<<"Enter the value of d:";
        cin>>d;
    }
};

class Multi_C: private Multi_A, private Multi_B
{
    public:
    void get_data()
    {
        set_A();
        set_B();
        cout<<"The value of a is:"<<a<<endl;
        cout<<"The value of b is:"<<b<<endl;

        cout<<"The value of c is:"<<c<<endl;
        cout<<"The value of d is:"<<d<<endl;
    }
};

int main()
{
    Multi_C c;
    c.get_data();

    return 0;
}