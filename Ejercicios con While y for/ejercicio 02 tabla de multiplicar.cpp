#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
    int tabla = 1;
	cout << "Ingrese un número para mostrar su table de multiplicación:\n";
	cin >> num1;
		cout << "La tabla de multiplicación del " << num1 << " es: ""\n";
	while (tabla <= 10){
		int resultado = num1 * tabla;
		cout << num1 << " x " << tabla << " = " << resultado << endl;
		tabla++;	
	}
	return 0;
}

