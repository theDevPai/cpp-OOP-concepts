//class representing a Circle, with attributes for radius and methods to calculate area and circumference.
#include<iostream>
using namespace std;

class circle
{
    private:
    float pi=3.14;

    public:
    int radius;

    float circumference()
    {
        float c=0.0;
        c=2*pi*radius;
        return c;
    }

    float area()
    {
        float a=0.0;
        a=pi*radius*radius;
        return a;
    }
};

int main()
{
    circle obj;
    int r;
    cout<<"Enter the radius of the circle:";
    cin>>obj.radius;


    cout<<"Circumference of the circle is:"<<obj.circumference()<<endl;
    cout<<"Area of the circle is:"<<obj.area()<<endl;

    return 0;

}