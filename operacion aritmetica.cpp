#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "dame 5 numeros, donde voy a restar el numero 1 - numero 5 y sumar numero 2, numero 3, numero 4 y multiplicar ambos resultados \n";
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	cout << "dame el primer numero \n";
	cin >> numero1;
	cout << "dame el segundo numero\n";
	cin >> numero2;
	cout << "dame el tercer numero \n";
	cin >> numero3;
	cout << "dame el cuarto numero \n";
	cin >> numero4;
	cout << "dame el quinto numero \n";
	cin >> numero5;
	int resultado1;
	int resultado2;
	int resultadoFinal;
	resultado1 = numero1 - numero5;
	resultado2 = numero1 + numero2 + numero3;
	resultadoFinal =resultado1 * resultado2;
	cout << "resultado final es: ";
	cout << resultadoFinal;
	return 0;
}

