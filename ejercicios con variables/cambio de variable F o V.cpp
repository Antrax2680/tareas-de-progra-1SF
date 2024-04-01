#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char condicion;
	bool resultado;
	cout << "Porfavor coloca S o N para Cambiar una variable: ";
	cin >> condicion;
	if (condicion == 's'){
		resultado = true;
		cout << "La variable es: ";
		cout << resultado;
	}else if (condicion == 'n')
	{
		resultado == false;
		cout << "La variable es: ";
		cout << resultado;
	}else
	{
		cout << "El caracter agregado no es aceptable";
	}
	return 0;
}

