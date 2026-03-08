#include <iostream>
using namespace std;
int main(){
	int liczba1, liczba2, suma;
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba1;
	
	cout << "Podaj druga liczbe: ";
	cin >> liczba2;
	
	suma= liczba1 + liczba2;
	
	cout << "Suma liczb wynosi: " << suma << endl;

if (suma % 2 == 0) {
    cout << "Wynik jest liczba parzysta." << endl;
} else {
	cout << "Suma jest liczba nieparzysta." << endl;
}
    
    return 0;
}