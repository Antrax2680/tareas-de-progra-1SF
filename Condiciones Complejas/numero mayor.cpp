#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese dos n�meros para ver cual de ellos es mayor \n";
	cout << "Ingrese el Primer N�mero:";
	cin >> num1;
	cout << "Ingrese el Segundo N�mero:";
	cin >> num2;
	if (num1 > num2){
		cout << "El n�mero 1 es maoyar";
	}
	if (num1 < num2){
		cout << "El n�mero 2 es Mayor";
	}
	return 0;
}

