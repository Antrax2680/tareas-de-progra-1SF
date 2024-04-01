#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese el número de cursos que lleva:";
	int Curso;
	cin >> Curso;
	if ( Curso == 5 )
	{
	   cout << "Primer semestre";
	}
	
	if ( Curso >= 7 )
	{
	   cout << "Semestre no identificado";
	}
	return 0;
}

