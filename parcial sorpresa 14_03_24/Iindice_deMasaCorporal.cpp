#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float peso;
	float altura;
	cout << "Por favor, vamos a calcular su indice de masa corporal, si esta entre el rango normal, si tiene bajo peso o alto peso,\n";
	cout << "Ingrese su Peso en Kilogramos (Kg) por favor:\n";
	cin >> peso;
	cout << "Ingrese su altura en metros (mts):\n";
	cin >> altura;
	int resultado2 = peso /(altura * altura);
	if (resultado2 < 18.5){
		cout << "Su indice de masa corporal es bajo, tiene que alimentarse bien y realizar ejercicio físico";
	}
	else if (resultado2  <= 25){
		cout << "Su indice de masa corporal es normal, siga así, cuide su apariencia física";
	}
	else if (resultado2  <= 30){
		cout << "Usted tiene sobrepeso, debe de realizar dieta y mejorar su físico, cuidese bien";
	}
	else if (resultado2 > 30){
		cout << "Usted tiene obesidad, debe de realizar dieta y mejorar su físico, ya no debe de consumir comida chatara, haga ejercicio, cuidese bien";
	}
	return 0;
}

