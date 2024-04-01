#include <iostream>
using namespace std;

int main() {
    int num1;
    int result = 0;
    cout << "Por favor ingrese un número para saber si es par o impar y de paso sumar los números hasta donde el número que ingreso usted: " << endl;
    cin >> num1;
    if (num1 % 2 == 0){
        for (int num2 = 0; num2 <= num1; num2+= 2){
		if (num2 % 2 == 0){ 
			cout << num2 << endl;
		 result += num2;
		 cout << "sumado es " <<result << endl;
		}
	 }
    } else{
        for (int num2 = 0; num2 <= num1; num2++){
	    if (num2 % 2!= 0){ 
		 cout << num2 << endl;
		 result += num2;
		 cout << "sumado es " << result << endl;
            }
        }
    }
	
    return 0;
	}
	

