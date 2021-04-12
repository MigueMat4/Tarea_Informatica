// <Juan Diego Marroquín Escobar- 1689821>
#include <iostream>
using namespace std;
int main()
{
	//declare variables y asigne valores
	int numero;
	int cuadradodelasuma = 0;
	int resultado1;
	int sumadecuadrados = 0;
	int resultado2 = 0;
	int total;
	//solicite el dato al usuario
	cout << "Ingrese el numero que desea" << endl;
	cin >> numero;
	//utilice un ciclo for para encontrar los numeros anteriores del numero ingresado
	for (int i = 1; i <= numero; i++) {
		//realice las operaciones necesarias
		cuadradodelasuma = cuadradodelasuma + i;
		resultado1 = cuadradodelasuma * cuadradodelasuma;
		sumadecuadrados = i * i;
		resultado2 = resultado2 + sumadecuadrados;
	}
	//haye la diferencia entre esas dos operaciones
	total = resultado1 - resultado2;
	//mostre los resultados :)
	cout << "Resultado de los cuadrados de la suma: " << resultado1 << endl;
	cout << "Resultado de la suma de lois cuadrados: " << resultado2 << endl;
	cout << "Diferencia de las dos operaciones: " << total << endl;
}