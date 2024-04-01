#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float nota5;
	cout << "Por favor ingrese sus notas para verificar su promedio final, deben de ser las 5 notas, \n";
	cout << "Ingrese la primera nota:\n";
	cin >> nota1;
	cout << "Ingrese la segunda nota:\n";
	cin >> nota2;
	cout << "Ingrese la tercera nota:\n";
	cin >> nota3;
	cout << "Ingrese la cuarta nota:\n";
	cin >> nota4;
	cout << "Ingrese la quinta nota:\n";
	cin >> nota5;
	int promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	if (promedio <= 60){
	    cout << "No tiene permitido hacer su examen privado";
	}
	else if (promedio <= 75){
		cout << "Sí puede realizar trabajo comunitario, entonces si puede realizar su examen privado";
	}
	else if (promedio <= 85){
		cout << "Su promedio es normal, si puede realizar su examen privado";
	}
	else if (promedio <= 90){
		cout << "Su promedio es alto, si se gradúa será con honores";
	}
	else if (promedio <= 95){
		cout << "Su promedio es muy alto, si se gradúa será con máximos honores";
	}
	else if (promedio <= 100){
		cout << "Puede exonerarse de examenes privados";
	}
	return 0;
}

