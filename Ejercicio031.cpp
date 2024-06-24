#include <iostream>
#include <cmath>
using namespace std;

int factorial(int b) {
    int f = 1;
    for (int i = 2; i <= b; ++i) {
        f *= i;
    }
    return f;
}
double suma(int a) {
    double s = 0;
    for (int i = 1; i <= a; ++i) {
        s += factorial(i) / pow(2, i);
    }
    return s;
}
int main() {
    int n;
    double sum;
    
    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    sum = suma(n);
    cout << "La suma es: " << sum << endl;
    int fact_n = factorial(n);
    cout << "El factorial de " << n << " es: " << fact_n << endl;
    return 0;
}
