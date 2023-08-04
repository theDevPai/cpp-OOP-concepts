#include<iostream>
using namespace std;

class Complex
{
    private:
    int real, imaginary;

    public:
    void set_data()
    {
        cout<<"Enter the complex number(with real and imaginary coefficients of the number seperated by a space):";
        cin>>real>>imaginary;

        cout<<endl<<"The number you entered is:"<<real<<"+"<<imaginary<<"i";
    }
    
    Complex operator+(const Complex& obj)
    {
        int real_res=0, imaginary_res=0;

        real_res=this->real + obj.real;
        imaginary_res=this->imaginary + obj.imaginary;

        cout<<endl<<"RESULT:"<<real_res<<"+"<<imaginary_res<<"i";
    }
};

int main()
{
    cout<<"COMPLEX NO. ...."<<endl;

    Complex c1,c2,c3;

    c1.set_data();
    c2.set_data();
    c3=c1+c2;
    
    return 0;
}