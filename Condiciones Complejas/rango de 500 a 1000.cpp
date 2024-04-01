#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1; 
	cout <<"Ingresar un numero para verificar si esta enj el rango de 500 a 1000:\n"; 
	cin >> numero1; 
	if (numero1 <= 499){ 
		cout << "el numero es menor al rango por lo tanto no pertenece:\n" ; 
	} 
	if (numero1 >= 500){ 
		cout << "el numero esta entre el rango:\n" ; 
	} 
	if (numero1 <= 1000){ 
		cout << "el numero esta entre el rango:\n" ; 
	} 
	if (numero1 >= 1001){ 
		cout << "el numero es mayor al rango por lo tanto no pertenece:\n" ; 
	}
	return 0;
}

