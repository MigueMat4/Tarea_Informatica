// Jeremy Obdulio Merida Boj_1706021
#include <iostream>
using namespace std;

int factor(int numero)
{
	int contador, multiplicacion;
	contador = 0;
	multiplicacion = 1;

	do {
		contador = contador + 1;
		multiplicacion = contador * multiplicacion;
	} while (contador < numero);
	
	return multiplicacion;
}

int main()
{
	int numero;

	cout << "ingrese un numero: ";
	cin >> numero;

	cout << "el factorial del numero ingresado es: " << factor(numero) << endl;
}