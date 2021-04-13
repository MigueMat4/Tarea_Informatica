// Ruben Fernando Espinoza Fernandez Carne:1525620
#include <iostream>

using namespace std;


int main()
{
	int numero, factorial = 1;
	cout << "Ingrese numero a calcular: ";
	cin >> numero;

	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}

	cout << "El factorial del numero es " << endl;
	cout << numero << "! = " << factorial << endl << endl;

	system("pause");