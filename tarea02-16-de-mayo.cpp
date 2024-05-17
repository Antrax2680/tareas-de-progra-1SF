#include <iostream>
#include <string>

using namespace std;

string cifrar(const string& cadena) {
	string resu = cadena;
	int longi = resu.length();
	
	for (int i = 0; i < longi; i++) {
		char num1 = resu[i];
		switch (num1) {
		case 'i':
		case 'I':
			resu[i] = '1';
			break;
		case 'e':
		case 'E':
			resu[i] = '3';
			break;
		case 'a':
		case 'A':
			resu[i] = '4';
			break;
		case 'o':
		case 'O':
			resu[i] = '0';
			break;
		case 'u':
		case 'U':
			resu[i] = '*';
			break;
		default:
			break;
		}
	}
	
	return resu;
}

int main() {
	string frase1, frase2;

	cout << "Ingrese una palabra o frase para cifrarla: ";
	getline(cin, frase1);
	
	frase2 = cifrar(frase1);
	
	cout << endl << "Frase cifrada: " << frase2 << endl;
	
	return 0;
}

