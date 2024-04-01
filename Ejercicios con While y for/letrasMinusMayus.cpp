#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	cout << "Por favor ingrese una letra para ver si es mayúscula o minúscula:\n\n";
	cin >> letra;
	if (letra >= 'a' && letra <= 'z'  ){
		cout << "\nLa letra es minúscula"; 
	}
	else if (letra >= 'A' && letra <= 'Z'  ){
		cout << "\nLa letra es mayúscula";
	}
	return 0;
}

