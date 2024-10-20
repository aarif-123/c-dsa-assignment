#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! = 1! = 1
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}



#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;  // Base case: F(0) = 0
    } else if (n == 1) {
        return 1;  // Base case: F(1) = 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
    }
}

int main() {
    int n = 6;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
    return 0;
}






#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;  // Base case: if n becomes 0, return 0
    } else {
        return (n % 10) + sumOfDigits(n / 10);  // Recursive call
    }
}

int main() {
    int n = 1234;
    cout << "Sum of digits of " << n << " is " << sumOfDigits(n) << endl;
    return 0;
}
