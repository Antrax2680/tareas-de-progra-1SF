#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Por favor ingrese una contraseña, debe de tener como mínimo 5 dígitos, únicamente es permitido números, no debe de terminar en un número par y pueda ser divisible dentro de 3\n";
	cout << "Ingrese su contraseña: ";
	char clave;
	cin >> clave;
	if (clave = 1){
		if (clave / 3){
			cout << "Su contraseña fue aprovada";
		}
	}
	else if (clave = 2){
		cout << "La clave no es admitida";
	}
	return 0;
}

