#include <iostream>
using namespace std;
float numeritos[5];
int ar1[10];
void aby(){
    cout << "Hola, Por favor ingresa un número" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingresa tu número en la posicion: " << i << endl;
        cin >> numeritos[i]; 
    }

}

void ObtenerArray10(){
    cout << "Hola que tal, Por favor ingresa cualquier numero" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingresa el numero en la posicion " << i << endl;
        cin >> ar1[i]; 
    }

}
float SumaDeElementos(int totalNum, float numeritos[5]){
    for (int i = 0; i < 5; i++){
        totalNum += numeritos[i];
    }
    return totalNum;
}
void VerificarElElementoMayor(){
    int mayor = numeritos[0];
    for (int i = 0; i < 5; i++){
        if (numeritos[i] > mayor){
            mayor = numeritos[i];
        }
    }
    cout << "El numero mayor es: " << mayor << endl;
}
void SacarPromedio(float totalSuma){
    float promedio;
    promedio = totalSuma / 5;
    cout << "El promedio de los numeros es: " << promedio << endl;
}
int main(){
    int temp = 0;
    int totalNum = 0;
    bool t;
    cout << "Vamos a sumar el total de los elementos en un arreglo " << endl;
    aby();
    float totalSuma = SumaDeElementos(totalNum, numeritos);
    cout << "Total de la suma de los elementos es; " << totalSuma << endl;
    VerificarElElementoMayor();
    SacarPromedio(totalSuma);
    cout << "Vamos a buscar un elemento en el arreglo " << endl;
    ObtenerArray10();
    cout << "Dime un numero: ";
    cin >> temp;
    for (int i = 0; i < 9; i++)
    {
        if (ar1[i] == temp)
        {
            t += 1;
        }
    }
    if (t == 1)
    {
        cout << "Hay un elemento igual a este" << endl;
    }else {
        cout << "No se encontro un elemento identico" << endl;
    }
    
    
    return 0;
}
