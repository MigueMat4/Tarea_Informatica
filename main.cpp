// <Dickson Everardo Cotom De León -1669921>
#include <iostream>

using namespace std;

int main()
{
	cout << "¡Hola estudiantes!" << endl;
	return 0;
}

int main() {
	int n;
	int divisible;
	int contador;
	contador = 1;

	//Se pedira al usuario que ingrese un numero
	cout << "Ingrese el numero: " << endl;
	cin >> n;

	// se tratara de encotrar por que numeros es divisible
	do {
		for (int a = 1; a <= n; a++) {
			if (n % a == 0) {
				cout << a << " ";
				contador == n;
			}
		}
	} while (contador == n);

}


