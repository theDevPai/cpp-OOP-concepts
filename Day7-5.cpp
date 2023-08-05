#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual double Area() const=0;
    virtual ~Shape(){};
};

class Circle:public Shape{
    private:
    int radius;

    public:
    Circle(double r): radius(r){}

    double Area() const override {
        return 3.14*radius*radius;
    }
};

class Square:public Shape{
    private:
    double side;

    public:
    Square(double a): side(a){}

    double Area() const override{
        return side*side;
    }
};

class Triangle:public Shape{
    private:
    double base, height;

    public:
    Triangle(double b, double h):base(b), height(h){}

    double Area() const override{
        return 0.5*base*height;
    }
};

int main()
{
    double r, si, b, h;
    cout<<"AREA CALCULATOR....";
    cout<<endl<<"Enter the size of the circle's radius:";
    cin>>r;
    cout<<"Enter the size of the square's side:";
    cin>>si;
    cout<<"Enter the size of the Traingle's base and height:";
    cin>>b>>h;
    Circle c(r);
    Square s(si);
    Triangle t(b, h);

    Shape* s1=&c;
    Shape* s2=&s;
    Shape* s3=&t;

    cout<<"CIRCLE AREA:"<<s1->Area()<<endl;
    cout<<"SQUARE AREA:"<<s2->Area()<<endl;
    cout<<"TRIANGLE AREA:"<<s3->Area()<<endl;

    return 0;
}