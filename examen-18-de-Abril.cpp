#include <iostream>
#include <cmath>
int o, t1, t2;
double n1, n2;
using namespace std;

void TerminarMenu(){
    cout << "¿Repetir el Programa? 1)Si \n2)No\n" << endl;
            cin >> o;
            switch (o)
            {
            case 1:
                o = 20;
                break;
            case 2:
                o = 5;
                break;
            default:
                break;
            }
}
void CalculadoraDeAngulo(double n1, double n2){
    double a, b, c, s;
    a = sqrt((n1 * n1) + (n2 * n2));
    b = sqrt((n1 * n1) - (n2 * n2));
    c = sqrt((n2 * n2) - (n1 * n1));
    s = (a + b + c) / 2;
    cout << "El angulo faltante es: " << s << " grados" << endl;
}
void CalcularHipotenusa(double x, double y){
    double hipotenusa;
    hipotenusa = sqrt(x*x + y*y);
    cout << "La hipotenusa es: " << hipotenusa << endl;
}
void factorialNumero(int n1) {
    int res;
    res = 1;
    cout << endl;
    for (int i = 1; i <= n1; i++) {
        res *= i;
    }
    cout << endl;
    cout << "Total de el facotrial es: " << res << endl;

}
void calculadoraDeVuelto(int billetes, int gastado) {
    int t;
    while (gastado > billetes)
    {
        cout << "Falta dinero, Por favor ingresa el dinero faltante" << endl;
        cin >> t;
        billetes += t;
    }
    if (gastado <= billetes)
    {
        cout << "Me diste " << billetes << endl;
        cout << "Y gasto " << gastado << endl;
        cout << "Tu vuelto es " << billetes - gastado << endl;
    }
    
    
}
int main(){
    do
    {
        cout << "        Menú\n¿Qué quieres hacer hoy?\n";
		cout << "1) Calculardora de la hipotenusa" << endl;
        cout << "2) Calculadora del angulo faltante de un triangulo" << endl;
        cout << "3) Calculadora del factorial" << endl;
        cout << "4) Calculadora de vuelto" << endl;
        cout << "5) Salir del Programa" << endl;
		cout << "Selecciona una opción:\n==> ";
        cin >> o;
        switch (o)
        {
        case 1:
            cout << "Dame el lado opuesto" << endl;
            cin >> n1;
            cout << "Dame el lado adyacente" << endl;
            cin >> n2;
            CalcularHipotenusa(n1, n2);
            TerminarMenu();
            break;
        case 2:
            cout << "Dame el primer angulo " << endl;
            cin >> n1;
            cout << "Dame el segundo angulo " << endl;
            cin >> n2;
            CalculadoraDeAngulo(n1, n2);
            TerminarMenu();
            break;
        case 3:
            cout << "Dame el numero que quieres saber su factorial" << endl;
            cin >> t1;
            factorialNumero(t1);
            TerminarMenu();
            break;
        case 4:
            cout << "Ingresa los billetes dados" << endl;
            cin >> t1;
            cout << "Ingresa la cantidad gastada" << endl;
            cin >> t2;
            calculadoraDeVuelto(t1, t2);
            TerminarMenu();
            break;
        case 5:
            cout << "Saliendo del menu..." << endl;
            break;
        default:
            break;
        }
    } while (o != 5);
    cout << "Saliste del programa" << endl;
    
}
