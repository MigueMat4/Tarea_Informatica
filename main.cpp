// <Diego Alejandro Navichoque Perez 1663721>
#include <iostream>
using namespace std;
int main() {
	int num;
	int contador;
	int sum;
	int promedio;
	contador = 0;
	promedio = 0;
	sum = 0;
	do
	{
		cout << "ingrese un numero" << endl;
		cin >> num;
		if (contador > 0) {
			contador = contador + 1;
			sum = sum + num;
			promedio = sum / contador;
		}
		else if (num < 0)
		{
			contador = contador - 1;
		}
	} while (num > 0);
	cout << "El promedio de los numeros ingresados es de:" << promedio << endl;
}