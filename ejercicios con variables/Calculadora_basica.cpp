#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero1;
	float numero2;
	int Operacion_de_variables;
	float resultado;
	cout << " Por favor Ingrese dos numeros, para realizar un calculo matematico. \n Ingrese el primer numero: ";
	cin >> numero1;
	cout << " Ingrese el segundo numero: " ;
	cin >> numero2;
	cout << " �Que operaci�n quiere realizar? \n 1) Suma \n 2) Resta \n 3) Multiplicaci�n \n 4) Divisi�n \n ";
	cin >> Operacion_de_variables;
	if (Operacion_de_variables == 1) {
		resultado = numero1 + numero2;
		cout << "El resultado de la Suma es: ";
		cout << resultado;
	}
	else if (Operacion_de_variables == 2) {
		resultado = numero1 - numero2;
		cout << "El resultado de la Resta es: ";
		cout << resultado;
	}
	else if (Operacion_de_variables == 3){
		resultado = numero1 * numero2;
		cout << "El resultado de la Multiplicaci�n es: ";
		cout << resultado;
	}
	else if (Operacion_de_variables == 4){
		resultado = numero1 / numero2;
		cout << "El resultado de la Divisi�n es: ";
		cout << resultado;
	}
	return 0;
}

