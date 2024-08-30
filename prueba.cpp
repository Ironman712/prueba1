// Codificado por: Beastieux
// Código Fuente: Calcula cuántos números pares hay entre dos números ingresados
#include <iostream>
using namespace std;
 
int main()
{
    int a = 0, b = 0, c = 0;
 
    cout << "Ingrese un número: ";
    cin >> a;
 
    cout << "Ingrese otro número: ";
    cin >> b;
 
    while (a <= b)
    {
        if (a % 2 == 0) // Corregido el condicional para verificar números pares
            c = c + 1;
        a = a + 1;
    }
 
    cout << c << endl;
    cin.ignore();
    return 0;
}