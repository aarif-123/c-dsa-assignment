#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return M_PI * radius * radius;
    }
    
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
    
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    
    double area() const override {

        return width * height;
    }
    
    double perimeter() const override {

        return 2 * (width + height);
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    
    cout << "Circle area: " << circle.area() << endl;

    cout << "Circle perimeter: " << circle.perimeter() << endl;


    cout << "Rectangle area: " << rectangle.area() << endl;

    cout << "Rectangle perimeter: " << rectangle.perimeter() << endl;
    
    return 0;
}