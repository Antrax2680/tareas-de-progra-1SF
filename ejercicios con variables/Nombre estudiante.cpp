#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string nombreEstudiante;
	cout << "Hola estudiante de la Universidad Mesoamericana, \n por favor introduzca su nombre a continuación: " << endl;
	getline(cin, nombreEstudiante, '\n');
	cout << " ¡Hola!, " << nombreEstudiante << endl;
	return 0;
}

