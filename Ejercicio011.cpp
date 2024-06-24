#include <iostream>
using namespace std;

int main() {
    int op1, op2, r;
    char op;
    cout << "Ingrese el primer numero: ";
    cin >> op1;
    cout << "Ingrese el segundo numero: ";
    cin >> op2;
    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            r = op1 + op2;
            break;
        case '-':
            r = op1 - op2; 
            break;
        case '*':
            r = op1 * op2;
            break;
        case '/':
            if (op2 != 0) {
                r = op1 / op2;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
                return 1;
            }
            break;
        default:
            cout << "Operador no válido." << endl;
            return 1;
    }
    cout << "El Resultado es: " << r << endl;
    return 0;
}