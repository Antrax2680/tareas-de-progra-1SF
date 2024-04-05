#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float numero1;
	float numero2;
	// WZ = WARZONE
	int WZ;
	float resultado;
	cout << "Vamos a realizar unas operaciones matemáticas\ncon esta calculadora y quiero que ingrese dos valores numéricos.\n";
	do {
	cout << "\nIngrese el primer número:\n";
		cin >> numero1;
	cout << "\nIngrese el segundo número:\n";
	cin >> numero2;
	cout << "\nIngresa el número de que operación quiere realizar\n1) sumar\n2) restar\n3) multicar\n4) dividir\n\n==> ";
		cin >> WZ;
	    if (WZ == 1)
	    {
			resultado = numero1 + numero2;
			cout << "El resultado de la suma es: ";
			cout << resultado;
		}else if (WZ == 2){
			resultado = numero1 - numero2;
			cout << "El resultado de la resta es: ";
			cout << resultado;
		}else if (WZ == 3){
			resultado = numero1 * numero2;
			cout << "El resultado de la multiplicacion es: ";
			cout << resultado;
		}else if (WZ == 4){
			resultado = numero1 / numero2;
			cout << "El resultado de la division es: ";
			cout << resultado;
		}else {
			cout << "Ingresaste una operacion invalida ";
		}
		cout << "\n\nEsta es la calculadora";
		cout << endl << "¿Quiere continuar calculando?\n1) Si\n2) No\n==> ";
		cin >> numero1;
	} while (numero1 == 1);
	cout << "Salimos de la calculadora y finalizamos operaciones matemáticas";
	return 0;
}

