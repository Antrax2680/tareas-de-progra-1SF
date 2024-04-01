#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double edad1; 
	double edad2; 
	cout << "ingresar edad de dos personas" << endl; 
	cout << "ingrese la primera edad:" << endl; 
	cin >> edad1; 
	cout << "ingrese la segunda edad:" << endl; 
	cin >> edad2;
	if (edad1 == edad2){ 
	cout << "las edades son iguales: \n " ; 
	if (edad1 != edad2){ 
	cout<< "las edades no son iguales: \n " ; 
	}  
	if (edad1 >= 18){ 
	cout << "la primera edad es mayor de edad \n "; 
	} 
	if (edad1 <= 17){
	cout << "la primera edad es menor \n"; 
	} 
	if (edad2 >= 18){ 
	cout << "la segunda edad es mayor de edad \n "; 
	} 
	if (edad2 <= 17){
	cout << "la segunda edad es menor "; 
	} 
	}
	return 0;
}

