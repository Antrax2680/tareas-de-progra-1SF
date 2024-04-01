#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero1; 
	double numero2; 
	cout << "Ver si dos numeros son iguales o no," << endl;
	cout << "ingresa el primer numero:" << endl; 
	cin >> numero1, '\n'; 
	cout << "ingresa el segundo numero:" << endl; 
	cin >> numero2, '\n'; 
	if (numero1 == numero2){ 
		cout << " Los numeros son iguales \n " << numero1<< endl; 
	} 
	if (numero1 != numero2){ 
		cout << " Los numeros no son iguales \n "; 
	} 
	return 0;
}

