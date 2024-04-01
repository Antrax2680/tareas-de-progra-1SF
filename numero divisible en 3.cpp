#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout<<"Ingrese un numero, para ver si es divisible en 3: \n";
	cin>>numero;
	if(numero%3==0){
		cout<< numero; 
		cout << " Es divisible en 3: \n";
	}else
	{
		cout<< numero; 
		cout << " No es divisible en 3: \n";
	}
	return 0;
}

