#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Por favor ingrese una contrase�a, debe de tener como m�nimo 5 d�gitos, �nicamente es permitido n�meros, no debe de terminar en un n�mero par y pueda ser divisible dentro de 3\n";
	cout << "Ingrese su contrase�a: ";
	char clave;
	cin >> clave;
	if (clave = 1){
		if (clave / 3){
			cout << "Su contrase�a fue aprovada";
		}
	}
	else if (clave = 2){
		cout << "La clave no es admitida";
	}
	return 0;
}

