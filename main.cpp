// Sheyla Daniela Rodas Ramos
// carné:1652421

#include<stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int calculo(int cantidad);


int main()
{
	int cantidad;
	cout<<"Ingrese la cantidad a saber: ";
	cin>>cantidad;
	int total = calculo(cantidad);
	cout<<"La diferencia del cuadrado de la suma y el cuadrado de los elementos es: "<<total;

	return 0;
}

int calculo(int cantidad) {
	int total = 1, suma1 = 0, suma2 = 0, resultado;
	for (int i = 1; i<=cantidad;i++){
		suma1 = suma1 + i;
		suma2 = suma2 + (i*i);
	}
	resultado = (suma1*suma1)-suma2;
	return resultado;
}
