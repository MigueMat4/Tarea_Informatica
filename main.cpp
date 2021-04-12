// Britany Leonela Alvarez Motta 1636921
#include <iostream>

using namespace std;

int main()
{
	int numero;
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	int multiplos;
	int suma;
	int res;
	int cociente;
	cociente = 0;
	multiplos = 0;
	suma = 0;
	res = 0;
	//Utilizaremos un ciclo for para poder realizar las operaciones
	for (int i = 1; i < numero; i++) {
		res = numero / i;
		cociente = numero % i;
		//Un if para hacer la comparacion del resultado del cociente
		if (cociente == 0) {
			multiplos++;
			cout << i << endl;
			suma = suma + i;
		}
	}
	//Haremos la comparacion para ver si el numero es perfecto, deficiente o abundante.
	if (suma == numero) {
		cout << "El numero es perfecto" << endl;
	}
	else if (suma > numero) {
		cout << "El numero es abundante";
	}
	else if (suma < numero) {
		cout << "El numero es deficiente" << endl;
	}
	else {
		cout << "Lo que ingreso no es un numero entero";
	}
}
