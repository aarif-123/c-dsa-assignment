#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long N = n;
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }
    
    double result = 1.0;
    double current_product = x;
    
    while (N > 0) {
        if (N % 2 == 1) {
            result *= current_product;
        }
        current_product *= current_product;
        N /= 2;
    }
    
    return result;
}

int main() {
    double x = 2.00000;
    int n = 10;
    
    double totalEnergy = myPow(x, n);
    cout << "Total energy generated over " << n << " days: " << totalEnergy << " kWh" << endl;
    
    return 0;
}
