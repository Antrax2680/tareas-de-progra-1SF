#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	cout << "Por favor ingrese una letra para ver si es may�scula o min�scula:\n\n";
	cin >> letra;
	if (letra >= 'a' && letra <= 'z'  ){
		cout << "\nLa letra es min�scula"; 
	}
	else if (letra >= 'A' && letra <= 'Z'  ){
		cout << "\nLa letra es may�scula";
	}
	return 0;
}

