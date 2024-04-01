#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;    // Cambiado a tipo int
	int sueldo;  // Cambiado a tipo int
	float resultado;
	
	cout << "Por favor ingrese los años trabajando en la empresa para calcular su bono navideño:\n";
	cin >> anio;
	
	cout << "Por favor ingrese su salario:\n";
	cin >> sueldo;
	
	if (anio <= 5) {
		resultado = sueldo * 0.05;  // Corregido el cálculo del porcentaje
		cout << "Su bono navideño por haber trabajado los años que ingresó es: " << resultado << endl;
	} else {  // Simplificado la lógica
		resultado = sueldo * 0.10;  // Corregido el cálculo del porcentaje
		cout << "Su bono navideño por haber trabajado más de 5 años en la empresa es de: " << resultado << endl;
	}
	return 0;
}

