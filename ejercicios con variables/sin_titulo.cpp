#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;    // Cambiado a tipo int
	int sueldo;  // Cambiado a tipo int
	float resultado;
	
	cout << "Por favor ingrese los a�os trabajando en la empresa para calcular su bono navide�o:\n";
	cin >> anio;
	
	cout << "Por favor ingrese su salario:\n";
	cin >> sueldo;
	
	if (anio <= 5) {
		resultado = sueldo * 0.05;  // Corregido el c�lculo del porcentaje
		cout << "Su bono navide�o por haber trabajado los a�os que ingres� es: " << resultado << endl;
	} else {  // Simplificado la l�gica
		resultado = sueldo * 0.10;  // Corregido el c�lculo del porcentaje
		cout << "Su bono navide�o por haber trabajado m�s de 5 a�os en la empresa es de: " << resultado << endl;
	}
	return 0;
}

