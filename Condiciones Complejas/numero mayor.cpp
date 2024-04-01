#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese dos números para ver cual de ellos es mayor \n";
	cout << "Ingrese el Primer Número:";
	cin >> num1;
	cout << "Ingrese el Segundo Número:";
	cin >> num2;
	if (num1 > num2){
		cout << "El número 1 es maoyar";
	}
	if (num1 < num2){
		cout << "El número 2 es Mayor";
	}
	return 0;
}

