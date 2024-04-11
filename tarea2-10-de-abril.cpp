#include <iostream>
#include <cstdlib>

using namespace std;

double calculadora(double num1, double num2, double num3, char op){
	double resultado;
	if (op == '+'){
		resultado = num1 + num2 + num3;
	}
	return resultado;
}
	
	void mostrarMensaje(){
		system("cls");
	}
		
		int main(int argc, char *argv[]) {
			double num1, num2, num3;
			char op;
			int control = 1;
			do {
				mostrarMensaje();
				cout << "ingrese el primer numero que tenga decimales: ";
				cin >> num1;
				cout << "ingrese el segundo numero que tenga decimales: ";
				cin >> num2;
				cout << "ingrese el tercer numero que tenga decimales: ";
				cin >> num3;
				cout << endl << "introduzca el simbolo de la suma:\n==> ";
				cin >> op;
				double resultado = calculadora(num1, num2, num3, op);
				cout << endl << "Su resultado es: " << resultado;
				
				cout << endl << "¿Volver a intentar?\n1) Si\n2) No\n==> ";
				cin >> control;
				if (control != 1 && control != 2) {
					control == 1;
					cout << "Siga instrucciones";
				}
				
			}while (control==1);
			
			return 0;
		}
		
		
