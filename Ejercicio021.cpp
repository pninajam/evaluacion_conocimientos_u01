#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    do {
        cout << "Ingrese el primer numero (debe ser positivo): ";
        cin >> n1;
        if (n1 <= 0) {
            cout << "El numero ingresado no es valido. Ingrese un numero positivo." << endl;
        }
    } while (n1 <= 0);
    do {
        cout << "Ingrese el segundo numero (debe ser positivo): ";
        cin >> n2;
        if (n2 <= 0) {
            cout << "El numero ingresado no es valido. Ingrese un numero positivo." << endl;
        }
    } while (n2 <= 0);
    int c = 0;
    int i = 2;
    while (i <= n1 && i <= n2) {
        if (n1 % i == 0 && n2 % i == 0) {
            c++;
        }
        i++;
    }
    if (c > 0) {
        cout << "Son pesi" << endl;
    } else {
        cout << "No son pesi" << endl;
    }
    return 0;
}