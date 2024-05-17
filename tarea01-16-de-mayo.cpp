#include <iostream>
#include <string>

using namespace std;


int cifrar(int contra, int numero) {
	int resultado = contra + numero; 
	resultado *= numero; 
	return resultado;
}

int main() {
	int contra, numero, contra2;
	

	cout << "Ingrese una contraseña de números: ";
	cin >> contra;
	

	cout << "Ingrese un número para las operaciones: ";
	cin >> numero;
	

	contra2 = cifrar(contra, numero);
	
	
	cout << endl << "Contraseña cifrada: " << contra2 << endl;
	
	return 0;
}

