#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Ingrese un n�mero para ver si es primo o no:\n";
	cin >> num;
	if (num != 1 && num > 1)
	{
	for (int num2 = 2; num2 <= num; num2++){
		if ((num % num2) == 0 && num != 2){
			cout << "El n�mero " << num << " no es primo\n";
			break;
    }else { 
	     cout << "El n�mero " << num << " es primo\n";
		 break;
		}
	  } 
	} 
	return 0;
}
