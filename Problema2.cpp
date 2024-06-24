#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
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