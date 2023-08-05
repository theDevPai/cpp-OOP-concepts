#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double calculateArea() const {
        return 0.0; // Default implementation for Shape, will be overridden in derived classes
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the calculateArea method for Circle
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Override the calculateArea method for Square
    double calculateArea() const override {
        return side * side;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Override the calculateArea method for Triangle
    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

// Function to calculate the area using dynamic polymorphism
double calculateAreaUsingPolymorphism(const Shape& shape) {
    return shape.calculateArea();
}

int main() {
    Circle circle(5.0);
    Square square(4.0);
    Triangle triangle(3.0, 6.0);

    // Using the calculateAreaUsingPolymorphism function with different shapes
    cout << "Circle Area: " << calculateAreaUsingPolymorphism(circle) << endl;
    cout << "Square Area: " << calculateAreaUsingPolymorphism(square) << endl;
    cout << "Triangle Area: " << calculateAreaUsingPolymorphism(triangle) << endl;

    return 0;
}
