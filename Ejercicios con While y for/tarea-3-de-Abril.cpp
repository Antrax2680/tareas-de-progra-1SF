#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "Por favor ingrese un n�mero para ver si est� en �rea com�n,\n�rea espec�fica o no nos encontramos en ese semestre:\n";
	cin >> num1;
	
	switch (num1){
	    case 1:
		cout << "El �rea es com�n";
		    break;
	    case 3:
		cout << "El �rea es com�n";
			break;
	    case 5:
		cout << "El �rea es espec�fica";
			break;
	    case 7:
		cout << "El �rea es espec�fica";
			break;
	    default:
		cout << "No nos encontramos en este semestre";
			break;
	}
    cout << endl;
	return 0;
}

