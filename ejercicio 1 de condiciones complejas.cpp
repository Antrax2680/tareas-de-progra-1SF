#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	cout << "Ingrese el Primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	if (num1 != 2){
		cout << " Los n�meros no son iguales \n "<<endl;
	}
	if (num1 <= num2 ){
		cout << " El n�mero 1 es menor o igual al n�mero 2 \n "<<endl;
	}
	if (num1 >= num2){
		cout << " El n�mero 1 es mayor o igual al n�mero 2 \n "<<endl;
	}
	if (num1 < num2){
		cout << " El n�mero 1 es menor al n�mero 2 \n "<<endl;
	}
	if (num1 > num2){
		cout << " El n�mero 1 es amyor al n�mero 2 \n "<<endl;
	}
	return 0;
}

