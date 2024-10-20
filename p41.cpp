// Ques 1. Write a recursive function to calculate the factorial of a given number n.

// Example:
// Input: n = 5
// Output: 120
// Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120.

// Ques 2. Write a recursive function to return the nth Fibonacci number. The Fibonacci sequence is defined as:

// F(0) = 0, F(1) = 1
// F(n) = F(n-1) + F(n-2) for n > 1
// Example:
// Input: n = 6
// Output: 8
// Explanation: Fibonacci series = 0, 1, 1, 2, 3, 5, 8,...

// Ques 3. Write a recursive function that takes a positive integer and returns the sum of its digits.

// Example:
// Input: n = 1234
// Output: 10
// Explanation: 1 + 2 + 3 + 4 = 10



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
