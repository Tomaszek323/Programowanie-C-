#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Dodawanie: " << a + b << endl;
    cout << "Odejmowanie: " << a - b << endl;
    cout << "Mnozenie: " << a * b << endl;

    if (b != 0) {
        cout << "Dzielenie: " << a / b << endl;
        cout << "Reszta z dzielenia: " << a % b << endl;
    } else {
        cout << "Nie mozna dzielic przez 0." << endl;
    }

    return 0;
}