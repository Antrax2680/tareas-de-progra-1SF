#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "¿Tengo Bicicleta nueva?: \n 1) Si \n 2) No";
	int Bicibleta;
	cin >> Bicibleta;
	if ( Bicibleta == 1 ) {
		cout << "Si tengo bicicleta, ¿Incluye algo la bicibleta?: \n 1) Si \n 2) No ";
	}
	else {
	cout << "No Tengo Bicibleta nueva";
	}
		int Incluye;
		cin >> Incluye;
		if ( Incluye == 1) {
			cout << "Contiene casco, rodilleras y ruedas de seguridad, ¿usaras alguna de esas?: \n 1) Si \n 2) No ";
				int usaras;
				cin >> usaras;
				if ( usaras == 1) {
				cout << "¿Que usaras?: \n 1) Casco y rodilleras \n 2) rueditas de seguridad";
				}
				int Que;
				cin >> Que;
				if ( Que == 1) {
					cout << "usaremos casco y rodillearas";
				int usaras;
				cin >> usaras;
				}
				else { 
				cout << "solo usare rueditas de seguridad";
				}
		        int Incluye;
				cin >> Incluye;
				if (Incluye ==1){
				cout << "Contiene casco, rodilleras y ruedas de seguridad";
				}
				else 
		        cout << "No contiene nada, ¿subirse a la bicicleta?: \n 1) Si \n 2) No";
		        }
				int subirse;
				cin >> subirse;
		        if ( subirse == 1) {
				cout << "Subirse y pedalear, ¿hay vehiculos circulando por la calle?: \n 1) Si \n 2) No";
			    }
			    else {
			    cout << "Pedalear con tranquilidad";
			    }
			    int vehiculos;	
			    cin >> vehiculos;
			    if ( vehiculos == 1) {
				cout << "Si hay vehiculos por la calle, ¿menjar la bicibleta despues?: \n 1) Si \n 2) No";
			    }
				int despues;
			    cin >> despues;
			    if ( despues == 1){
				cout << "manejar la bicilceta despues ya que hay trafico y no tener accidentes";
			    }
			    else {
			    cout << "manejar de todas formas y arriesgarse a tener algún accidente";
				}
		}
	return 0;
}

