#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Hola, coloca 2 numeros para realizarte una division y darte tu residuo \n";
	int numero1;
	int numero2;
	int resultado;
	float residuo;
	cout << "colocar el primer numero: ";
	cin >> numero1;
	cout << "colocar el segundo numero: ";
	cin >> numero2;
	resultado = numero1 / numero2;
	cout << "el resultado de la division es: ";
	cout << resultado;
	cout << "\n";
	cout << "el residuo es: ";
	residuo = numero1 % numero2;
	cout << residuo;
	
	return 0;
}

