// <Ingrese su nombre completo y número de carnet>
// Angel André Cotoc Cuzal 1518321
// Programa de un numero aleatorio que se crea entre 1 y 20
// El objetivo es adiminar el numero y se le da la cantidad de intentos 
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{

	int x;
	int num;
	int contador = 0;
	// Generando numero aleatorio y poniendo que no sea mayor que 20
	srand(time(NULL));
	x = rand() % 21;
	// El numero aleatorio esta lamcenado en "X"
	cout << "Numero aleatorio generado entre(0,20) generado " <<endl;

	do {
		cout << "Ingrese el numero que crea que es el numero aleatorio" << endl;cin >> num;

		if (num < x) {
			// Si el numero aleatorio ejemolo es 15 y el usuario ingresa 2
			// como 2 es menor que 15 se le dice que el numero es mayor para que tenga mas posibilidades de acierto
			cout << "El numero es mayor" << endl;

		}
		else if (num > x) {
			// En caso de que el numero sea 15 y el usuario ingresa 17
			// Como 17 es mayor que 15 el nunero es menor 
			cout << "El numero es menor" << endl;

		}

		else if (num == x) {
			// Si el numero es 15 y ingresan 15
			// Gano
			cout << "Acertaste" << endl;
		}
		contador++;

		// El while significa que el programa finaliza cuando se encuebtra x
	} while (num != x);



	cout << "El numero de intentos es de: " << contador << endl;





	system("pause");
}