#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese su anio de nacimiento:";
	int anio;
	cin >> anio;
	if ( anio <= 1999 )
	{
		cout << "Siglo 20";
	}
	if ( anio >= 2000 )
	{
		cout << "Siglo 21";
	}
	return 0;
}

