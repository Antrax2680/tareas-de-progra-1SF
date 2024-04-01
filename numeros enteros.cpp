#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero entero:";
	int numero;
	cin >> numero;
	if ( numero % 2 == 0 )
	{
		cout << "numero par";
	}
	else
	{
		cout << "numero impar";
	}
	return 0;
}

