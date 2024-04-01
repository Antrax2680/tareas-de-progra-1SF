#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float ang1;
	float ang2;
	float ang3;
	float resultado1;
	float resultado2;
	cout << "Ayudame a calcular el angulo de un triangulo para saber si es Equilatero, Isósceles o Escaleno,\n";
	cout << "ingresa el primer lado (A):\n";  
	cin >> ang1;
	cout << "ingresa el segundo lado (B):\n";  
	cin >> ang2;
	cout << "ingresa el tercer lado (C):\n";  
	cin >> ang3;
	if (resultado1 = ang1 == ang2 == ang3){
		cout << "Los tres lados del triangulo son iguales, por lo que es un Equilatero \n";
	} else {
		resultado1 = ang1 != ang2 != ang3;
		cout << "Los tres lados no son iguales, por lo que es un triangulo Escaleno";
	}
	return 0;
}

