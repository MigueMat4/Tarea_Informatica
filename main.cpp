// Gerardo Samuel Ortiz Cordero 2350421
#include <iostream>
using namespace std;

int main()
{
	int numero,contador,residuo, divisibles=0;
	
	//Entradas.
	cout << "Ingrese numero: ";
	cin >> numero;

	//Proceso.
	contador = 1;

	do
	{
		residuo = numero%contador;
		if (residuo == 0)
		{
			divisibles = divisibles++;
		}
		contador = contador++;
	} while (contador <= numero);

	//Salida.
	if (divisibles == 2)
	{
		cout << "El numero es primo " << endl;
	}
	else
	{
		cout << "El numero es compuesto " << endl;
	}
	system("pause");
}
