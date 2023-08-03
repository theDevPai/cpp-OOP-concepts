//class rectangle with length width parameters
//functions to find the perimeter and area
#include<iostream>
using namespace std;

class Rectangle
{
    private:
    double length, width;

    public:
    void get_data()
    {
        cout<<"Enter the length of the rectangle:";
        cin>>length;
        cout<<"Enter the width of the rectangle:";
        cin>>width;
    }

    double perimeter()
    {
        int perimeter=0;
        perimeter=2*(length+width);
        return perimeter;
    }

    double area()
    {
        int area=0;
        area=length*width;
        return area;
    }
};

int main()
{
    cout<<"RECTANGLE DIMENSION CALCULATOR....."<<endl;
    Rectangle rect;

    rect.get_data();

    cout<<endl<<"The perimeter of the rectangle is:"<<rect.perimeter();

    cout<<endl<<"The area of the rectangle is: "<<rect.area();

    return 0;
}