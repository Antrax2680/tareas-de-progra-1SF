#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		cout<< "ingresar su salario mensual: ";
    int salario; 
	cin >> salario;
	{
	if (salario == 2800)
	   cout << "es igual ";
	}
	{
	if (salario > 2800)
		cout << "es mayor ";
	}
	{
	if (salario < 2800)
		cout << "es menor";
	}
	return 0;
}

