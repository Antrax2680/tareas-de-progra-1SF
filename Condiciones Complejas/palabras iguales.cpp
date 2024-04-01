#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string palabra1;
	string palabra2;
	cout << "Ayudame a poder ver si las palabras que ingresaras seran iguales o no, \n";
	cout << "Ingresa la primera palabra: ";
	getline ( cin, palabra1,'\n' );
	cout << "Ingresa la segunda plabra: ";
	getline ( cin, palabra2, '\n' );
	if(palabra1 == palabra2) {
		cout << "Las palabras son iguales ";
	}
	if(palabra1 != palabra2) {
		cout << "Las palabras no coinciden ";
	}
	return 0;
}

