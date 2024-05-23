#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void tabla(char tablero[3][3]) {
	cout << "   A   B   C" << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < 3; j++) {
			cout << " " << tablero[i][j] << " ";
			if (j < 2) cout << "|";
		}
		cout << endl;
		if (i < 2) cout << "  ---|---|---" << endl;
	}
}
bool ganador(char tablero[3][3], char num1) {
	for (int i = 0; i < 3; i++) {
		if (tablero[i][0] == num1 && tablero[i][1] == num1 && tablero[i][2] == num1) {
			return true;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (tablero[0][i] == num1 && tablero[1][i] == num1 && tablero[2][i] == num1) {
			return true;
		}
	}
	if (tablero[0][0] == num1 && tablero[1][1] == num1 && tablero[2][2] == num1) {
		return true;
	}
	if (tablero[0][2] == num1 && tablero[1][1] == num1 && tablero[2][0] == num1) {
		return true;
	}
	return false;
}
bool tabl(char tablero[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (tablero[i][j] == ' ') {
				return false;
			}
		}
	}
	return true;
}
void tabi(char tablero[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			tablero[i][j] = ' ';
		}
	}
}
int numal() {
	return (rand() % 6) + 1;
}
int main() {
	string p1, p2;
	char tablero[3][3];
	bool repetir = true;
	char denuevo;
	srand(static_cast<unsigned int>(time(0)));
	
	cout << "Hola, bienvenidos, vamos a jugar Totito CMD xd\nse usará un dado para ver quién comenzará primero\n";
	cout << "Jugador 1 ingrese su nombre: ";
	getline(cin, p1);
	cout << "Jugador 2 ingrese su nombre: ";
	getline(cin, p2);
	
	while (repetir) {
		tabi(tablero);
		
		int dado = numal();
		char numa = (dado % 2 == 0) ? 'X' : 'O';
		
		cout << "El número del dado es: " << dado << endl;
		cout << "asi que comienza el jugador: " << (numa == 'X' ? p1 : p2) << " con el símbolo " << numa << endl;
		
		bool go = false;
		while (!go) {
			tabla(tablero);
			int fila;
			char col;
			cout << "Turno de " << (numa == 'X' ? p1 : p2) << " " << numa << endl;
			cout << "Ingrese la fila (1, 2, 3): ";
			cin >> fila;
			cout << "Ingrese la columna (A, B, C): ";
			cin >> col;
			
			int columna;
			if (col == 'A' || col == 'a') {
				columna = 0;
			} else if (col == 'B' || col == 'b') {
				columna = 1;
			} else if (col == 'C' || col == 'c') {
				columna = 2;
			} else {
				columna = -1;
			}
			
			if (fila >= 1 && fila <= 3 && columna >= 0 && columna <= 2 && tablero[fila-1][columna] == ' ') {
				tablero[fila-1][columna] = numa;
				if (ganador(tablero, numa)) {
					tabla(tablero);
					cout << "¡" << (numa == 'X' ? p1 : p2) << " ha ganado!" << endl;
					go = true;
				} else if (tabl(tablero)) {
					tabla(tablero);
					cout << "¡¡Empate!!" << endl;
					go = true;
				} else {
					numa = (numa == 'X') ? 'O' : 'X';
				}
			} else {
				cout << "Esta jugada no aplica, por favor intenta de nuevo, no sea bot." << endl;
			}
		}
		cout << "¿Jugar de nuevo?\n1) si\n 2) no:\nSi = s, No = n\n==> ";
		cin >> denuevo;
		if (denuevo != 's' && denuevo != 'S') {
			repetir = false;
		}
	}
	
	return 0;
}
