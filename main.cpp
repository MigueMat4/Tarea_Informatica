// <Rudy Anibal Yax Garcia Carnet No.1699421>
#include <iostream>

using namespace std;

void funcion(int n1, int factorial) {

	for (int x = 1; x <= n1; x++) {
		factorial = factorial * x;
	}
	cout << "La respues es " << factorial << endl;

}
int main() {
	int numeroingresado;

	cout << "Ingrese un numero: ";
	cin >> numeroingresado;

	funcion (numeroingresado);

}
