#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int speed;

public:
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {}

    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    int getSpeed() const {
        return speed;
    }

    void setSpeed(int s) {
        if (s >= 0) {
            speed = s;
        } else {
            cout << "Speed cannot be negative!" << endl;
        }
    }

    void increaseSpeed(int amount) {
        if (amount > 0) {
            speed += amount;
        } else {
            cout << "Increase amount must be positive!" << endl;
        }
    }

    void decreaseSpeed(int amount) {
        if (amount > 0) {
            if (speed - amount >= 0) {
                speed -= amount;
            } else {
                speed = 0;
            }
        } else {
            cout << "Decrease amount must be positive!" << endl;
        }
    }

    void displayCarDetails() const {
        cout << "Brand: " << brand << ", Model: " << model
             << ", Year: " << year << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2022);

    car.displayCarDetails();

    car.increaseSpeed(50);
    car.displayCarDetails();

    car.decreaseSpeed(20);
    car.displayCarDetails();

    car.decreaseSpeed(40);
    car.displayCarDetails();

    return 0;
}
