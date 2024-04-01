#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	cout << "ingrese el primer numero:";
	cin >> numero1;
	cout << "ingrese el segundo numero:";
	cin >> numero2;
	int resultado;
	resultado = numero1 - numero2;
	cout << "El resultado es:" << resultado;
	if ( resultado < 0 )
		cout << " El numero es negativo";
	if ( resultado >= 1 ) 
		cout << " El numero es positivo";
	return 0;
}

