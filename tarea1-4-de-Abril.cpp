#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	
	do {
		cout << "Hola, bienvenido,\n";
		cout << endl << "�Quieres seguir en el men�?\n 1) SI\n2) NO";
		cin >> control;
	} while (control == 1);
	cout << "Salio del men�, fin del proceso";
	return 0;
}

