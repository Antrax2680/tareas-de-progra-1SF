#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float radio;
	float pi = 3.14;
	cout << "Hola amigo/a, ayudame a calcular el área de un circulo, \n";
	cout << "Ingresa el radio: ";
	cin >> radio;
	cout << "El area es: " << pi * (radio*radio) << endl;
	cout << "¡Gracias por ayudarme!";
	return 0;
}

