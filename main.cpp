#include <iostream>
//Anderson Omar Noe Hernandez de Leon, 1512321
using namespace std;


int main()
{
	int opcion;

	do {


		cout << "1 interfaz" << endl;
		cout << "2 interfaz 2" << endl;
		cout << "3. interfaz 3" << endl;
		cout << "4. salir" << endl;
		cout << "Ingrese la opcion deseada ";
		cin >> opcion;
		if (opcion == 1) {
			system("cls");
			cout << "interfaz predeterminada 1" << endl;
			system("color 0B");
		}
		else if (opcion == 2) {
			system("cls");
			cout << "interfaz predeterminada 2" << endl;
			system("color 25");
		}
		else if (opcion == 3) {
			system("cls");
			cout << "interfaz predeterminada 3" << endl;
			system("color AF");
		}
		else if (opcion == 4) {
			cout << "SALIENDO...." << endl;
		}
		else {
			cout << "OPCION NO VALIDA" << endl << endl;
		}
	} while (opcion != 4);
	system("pause");
}