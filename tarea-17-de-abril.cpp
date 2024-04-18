#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void menu1() {
	int coordx, coordy;
	cout << "Por favor ingresa una coordenada en x" << endl;
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y" << endl;
	cin >> coordy;
	gotoxy(coordx, coordy);
	cout << "Hola mundo desde gotoxy"<< endl;
	
	int num;
	cout << "Por favor ingresa un n�mero" << endl;
	cin >> num;
	int centro_x = 40; // 
	int centro_y = 12; 
	gotoxy(centro_x, centro_y);
	cout << num;
	string palabra;
	cout << "Por favor ingresa una palabra" << endl;
	cin >> palabra;
	for (int i = 0; i < 10; ++i) {
		int rand_x = rand() % 80; 
		int rand_y = rand() % 25; 
		gotoxy(rand_x, rand_y);
		cout << palabra;
	}
}

void menu2() {
	int coordx, coordy;
	cout << "Por favor ingresa una coordenada en x para imprimir 'Hola mundo desde gotoxy': "<< endl;
	cin >> coordx;
	cout << "Por favor ingresa una coordenada en y para imprimir 'Hola mundo desde gotoxy': "<< endl;
	cin >> coordy;
	gotoxy(coordx, coordy);
	cout << "Hola mundo desde gotoxy"<< endl;
	gotoxy(30, 30);
	string nombre_companero;
	cout << endl << "Por favor ingresa el nombre de tu compa�ero: "<< endl;
	cin >> nombre_companero;
	cout << "Hola " << nombre_companero << ", �c�mo est�s?"<< endl;
}

int main() {
	int op;
	do {
		cout << endl << "Men� 1 o 2:" << endl;
		cout << "1. Imprimir hola mundo desde gotoxy, mostrar un n�mero al centro y mostrar una palabra en distintas cordenadas\n" << endl;
		
		cout << "2. Mostrar cordenadas (30, 30) y mostrar ascii raros luego saludar a un tu compa�ero\n" << endl;
		
		cout << "3. Salir" << endl;
		cout << "Seleccione una opci�n: "<< endl;
		cin >> op;
		switch (op) {
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
		case 3:
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opci�n inv�lida. Por favor, seleccione una opci�n v�lida." << endl;
		}
	} while (op != 3);
	return 0;
}
