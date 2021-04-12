// Karla Elizabeth Lopez Avila - 1510421
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n1, n2;
    float suma, resta, mult, divi;
    cout << "\nIntroduzca un numero: ";
    cin >> n1 ;
    cout << "\nIntroduzca otro numero: ";
    cin >> n2;
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    cout << fixed << setprecision(2);
    cout << "\nsuma: " << fixed << setprecision(2) << suma;
    cout << "\nresta: " << resta;
    cout << "\nmultiplicacion: " << mult;
    system("pause");
}

