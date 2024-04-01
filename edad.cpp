#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese su edad:";
	int edad;
	cin >> edad;
	if ( edad >= 18 )
	{
		cout << "Mayor de edad";
	}
	if ( edad < 18 )
	{
		cout << "Menor de edad";
	}
	return 0;
}

