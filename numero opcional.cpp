#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Este trabajo no es obligatorio, pero pueden hacerlo si gustan \n";
	int numero1;
	cout << "dame un numero si quieres, si no presiona otra tecla \n";
	if (cin >> numero1) {
		cout << "gracias por poner un numero, el numero es: ";
		cout << numero1;
	}
	else {
		cout << "gracias por usar el programa";
	}
	
	return 0;
}

