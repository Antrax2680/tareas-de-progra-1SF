#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2;
	cout << "Ingrese el Primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	if (num1 != 2){
		cout << " Los números no son iguales \n "<<endl;
	}
	if (num1 <= num2 ){
		cout << " El número 1 es menor o igual al número 2 \n "<<endl;
	}
	if (num1 >= num2){
		cout << " El número 1 es mayor o igual al número 2 \n "<<endl;
	}
	if (num1 < num2){
		cout << " El número 1 es menor al número 2 \n "<<endl;
	}
	if (num1 > num2){
		cout << " El número 1 es amyor al número 2 \n "<<endl;
	}
	return 0;
}

