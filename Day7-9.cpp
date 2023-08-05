#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function for calculating area
    virtual double calculateArea() const = 0;

    // Virtual function for displaying the shape type
    virtual void displayShape() const {
        cout << "Unknown Shape" << endl;
    }

    // Virtual destructor for proper cleanup
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the pure virtual function calculateArea for Circle
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    // Implementation of the virtual function displayShape for Circle
    void displayShape() const override {
        cout << "Circle" << endl;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Implementation of the pure virtual function calculateArea for Square
    double calculateArea() const override {
        return side * side;
    }

    // Implementation of the virtual function displayShape for Square
    void displayShape() const override {
        cout << "Square" << endl;
    }
};

int main() {
    // Uncommenting the below line will result in a compilation error
    // Shape shape; // Error: Cannot create objects of abstract class

    Circle circle(5.0);
    Square square(4.0);

    // Using base class pointer to achieve polymorphism
    Shape* shapePtr1 = &circle;
    Shape* shapePtr2 = &square;

    shapePtr1->displayShape(); // Output: Circle
    cout << "Circle Area: " << shapePtr1->calculateArea() << endl;

    shapePtr2->displayShape(); // Output: Square
    cout << "Square Area: " << shapePtr2->calculateArea() << endl;

    return 0;
}
