#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << " dame 2 numero te lo voy a sumar y me das el tercero te lo voy a restar \n";
	int numero1;
	int numero2;
	int numero3;
	int resultado;
	cout << "dame el primer numero \n";
	cin >> numero1;
	cout << "dame el segundo numero \n";
	cin >> numero2;
	cout << "dame el terver numero \n";
	cin >> numero3;
	resultado = numero1 + numero2 - numero3;
	cout << "el resultado es: ";
	cout << resultado;
	
	return 0;
}

