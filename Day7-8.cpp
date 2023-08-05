#include<iostream>
#include<cmath>
using namespace std;

class Calculator
{
    private:
    float sum, diff, prod, div;

    public:
    float add(float a, float b)
    {
        sum=a+b;
        return sum;
    }

    float subtract(float a, float b)
    {
        diff=a-b;
        return diff;
    }

    float multiply(float a, float b)
    {
        prod=a*b;
        return prod;
    }
    
    float divide(float a, float b)
    {
        div=a/b;
        return div;
    }

};

class Scientific:public Calculator
{
    private:
    float root, power;

    public:
    float rootof(float a)
    {
        root= sqrt(a);
        return root;
    }

    float tothepower(float a, float b)
    {
        power= pow(a,b);
        return power;
    }
};

int main()
{
    int o;
    float a,b;
    cout<<"CALCULATOR LOADING...";
    Scientific calc;
    while(1)
    {
        cout<<endl<<"ENTER YOUR OPERATION\n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.SQUARE ROOT \n 6.TO POWER \n 7.SWITCH OFF";
        cout<<endl<<"Your option:";
        cin>>o;
        if(o==1)
        {

            cout<<"Enter numbers to add:";
            cin>>a>>b;
            cout<<endl<<"SUM="<<calc.add(a,b);
        }
        if(o==2)
        {

            cout<<"Enter numbers to subtract:";
            cin>>a>>b;
            cout<<endl<<"Difference="<<calc.subtract(a,b);
        }
        if(o==3)
        {

            cout<<"Enter numbers to multiply:";
            cin>>a>>b;
            cout<<endl<<"Product="<<calc.multiply(a,b);
        }
        if(o==4)
        {

            cout<<"Enter numbers to divide:";
            cin>>a>>b;
            cout<<endl<<"Division="<<calc.divide(a,b);
        }
        if(o==5)
        {

            cout<<"Enter numbers to find square root:";
            cin>>a;
            cout<<endl<<"Square Root="<<calc.rootof(a);
        }
        if(o==6)
        {

            cout<<"Enter numbers to find the power of:";
            cin>>a>>b;
            cout<<endl<<"Power of "<<a<<"to the power "<<b<<" is: "<<calc.tothepower(a,b);
        }
        if(o==7)
        {

            exit(0);
        }

        return 0;
    }
}