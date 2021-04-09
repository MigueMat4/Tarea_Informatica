// Diego José Abdo Estrada - 1625021

#include <iostream>
using namespace std;

int main()
{
	int x, promedio, pares, impares, r1, r2, r3, r4, z;
	int n1, n2, n3, n4, aux;

	cout << "Ingrese un numero de hasta 4 cifras: ";
	cin >> x;
	cout << endl;

	r1 = x / 1000;
	z = x % 1000;
	r2 = z / 100;
	z = z % 100;
	r3 = z / 10;
	z = z % 10;
	r4 = z;


	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl << endl;



	promedio = (r1 + r2 + r3 + r4) / 4;
	cout << "El promedio es: " << promedio << endl << endl;

	pares = r2 + r4;
	impares = r1 + r3;

	if (pares > impares)
	{
		cout << "La suma de los pares es mayor a la de los impares" << endl << endl;
	}
	else {
		cout << "La suma de los pares es menor a la de los impares" << endl << endl;
	}
	if (r1 % 2 == 0)
	{
		cout << r1 << " Es par" << endl;

	}
	else
	{
		cout << r1 << " Es impar" << endl;
	}

	if (r2 % 2 == 0)
	{
		cout << r2 << " Es par" << endl;
	}
	else
	{
		cout << r2 << " Es impar" << endl;
	}

	if (r3 % 2 == 0)
	{
		cout << r3 << " Es par" << endl;

	}
	else
	{
		cout << r3 << " Es impar" << endl;
	}
	if (r4 % 2 == 0)
	{
		cout << r4 << " Es par" << endl << endl;
	}
	else
	{
		cout << r4 << " Es impar" << endl << endl;
	}
	system("pause");
}
