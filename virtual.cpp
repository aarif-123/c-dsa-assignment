#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    virtual double area() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override {
        return width * height;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(3.0);
    shapes[1] = new Rectangle(4.0, 5.0);
    shapes[2] = nullptr;

    for (int i = 0; i < 3; ++i) {
        if (shapes[i] != nullptr) {
            cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
        } else {
            cout << "Shape " << i + 1 << " is uninitialized." << endl;
        }
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
