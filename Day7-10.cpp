#include <iostream>

class Vector {
public:
    double x;
    double y;
    double z;

    Vector(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

    // Overloading the + operator to add two vectors
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y, z + other.z);
    }

    // Function to display the vector components
    void display() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

int main() {
    Vector vector1(1.0, 2.0, 3.0);
    Vector vector2(4.0, 5.0, 6.0);

    Vector sum = vector1 + vector2;

    std::cout << "Vector 1: ";
    vector1.display(); // Output: (1, 2, 3)
    std::cout << std::endl;

    std::cout << "Vector 2: ";
    vector2.display(); // Output: (4, 5, 6)
    std::cout << std::endl;

    std::cout << "Sum of Vector 1 and Vector 2: ";
    sum.display(); // Output: (5, 7, 9)
    std::cout << std::endl;

    return 0;
}

//https://www.youtube.com/watch?v=Beh-lJwQJcM
//watch this to understand vectors