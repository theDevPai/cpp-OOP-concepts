//demonstrate the concept of friend functions in a class.
#include<iostream>
using namespace std;

class fren
{
    private:
    int fren_variable;

    public:
    void set_data()
    {
        fren_variable=333;
        cout<<"Variable accessed through member function"<<endl;
        cout<<"Variable:"<<fren_variable;
    }

    friend void fren_func();
};

void fren_func()
{
    int fren_variable=6969;
    cout<<endl<<"Variable accessed through fren function"<<endl;
    cout<<"Variable:"<<fren_variable;
};

int main()
{
    cout<<"DEMONSTRATING FRIEND FUNCTION...."<<endl;
    fren f1;

    f1.set_data();
    fren_func();
    return 0;
}