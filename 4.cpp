//demonstrate constructor overloading
#include<iostream>
using namespace std;

class overload
{
    private:
    int num;

    public:
    overload()
    {
        num=0;
        cout<<endl<<"The value stored in num is:"<<num;
    }

    overload(int x)
    {
        num=x;
        cout<<endl<<"The value stored in num is:"<<num;
    }
};

int main()
{
    cout<<"CONSTRUCTOR OVERLOADING...."<<endl;

    overload();
    overload(9);

    return 0;
}