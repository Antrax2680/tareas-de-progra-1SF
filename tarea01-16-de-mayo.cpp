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
	

	cout << "Ingrese una contrase�a de n�meros: ";
	cin >> contra;
	

	cout << "Ingrese un n�mero para las operaciones: ";
	cin >> numero;
	

	contra2 = cifrar(contra, numero);
	
	
	cout << endl << "Contrase�a cifrada: " << contra2 << endl;
	
	return 0;
}

