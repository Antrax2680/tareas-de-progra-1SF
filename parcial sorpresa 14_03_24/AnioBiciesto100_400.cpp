#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	cout<<"Ingrese un a�o, y calcular� si es biciesto: \n";
	cin>>anio;
	if (anio%4==0 && anio%100!=0 || anio%400==0){
		cout<< anio; 
		cout << "\nEs a�o biciesto";
	}else {
		cout<< anio; 
		cout << "\nNo es a�o biciesto";
	}
	return 0;
}

