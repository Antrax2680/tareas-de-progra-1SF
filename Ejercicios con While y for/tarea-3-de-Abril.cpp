#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "Por favor ingrese un número para ver si está en área común,\nárea específica o no nos encontramos en ese semestre:\n";
	cin >> num1;
	
	switch (num1){
	    case 1:
		cout << "El área es común";
		    break;
	    case 3:
		cout << "El área es común";
			break;
	    case 5:
		cout << "El área es específica";
			break;
	    case 7:
		cout << "El área es específica";
			break;
	    default:
		cout << "No nos encontramos en este semestre";
			break;
	}
    cout << endl;
	return 0;
}

