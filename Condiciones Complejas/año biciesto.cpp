#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio; 
	cout<<"Ingrese un anio, para calcular si es  biciesto: \n"; 
	cin>>anio; 
	if(anio%4==0 && anio%100!=0 || anio%400==0){ 
		cout<< anio;  
		cout << "Es biciesto\n"; 
	}else 
	{ 
	} 
	cout<< anio;  
	cout << "No es biciesto \n"; 
	if(anio%10==0){ 
		cout<< anio;  
		cout << "Es divisible en 10 \n"; 
	}else 
	{ 
	} 
	cout<< anio;  
	cout << "No es divisible en 10 \n";
	return 0;
}

