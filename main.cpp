// Fernanda Maria Galvez Cifuentes 1635421
#include <iostream>

using namespace std;

int main()
{
	//programa para saber si el numero es par o impar
	int n1;

	cout << "Ingrese un numero:  " << endl;
	cin >> n1;

	if (n1 % 2 == 0)
	{
		cout << "Es un numero par" << endl;
	}
	else
	{
		cout << "Es un numero impar" << endl;
	}
	system("pause");
}
