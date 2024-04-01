#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero1;
    float numero2;
	int sumaresta;
	float resultado;
	cout << "Ayudame a realizar una operación matemática,";
	cout << "Ingresa el primer número: ";
	cin >> numero1 ;
    cout << "Ingresa el segundo número: "; 
	cin >> numero2 ;
	cout << " ¿Que operación quiere realizar? \n 1) Suma \n 2) Resta \n ";
	cin >> sumaresta
	if (sumaresta == 1) {
	resultado = numero1 + numero2;
	cout << "El resultado de la Suma es: ";
	cout << resultado;
	}
	else if (sumaresta == 2) {
	resultado = numero1 - numero2;
	cout << "El resultado de la Resta es: ";
	cout << resultado;
	}
	return 0;
}

