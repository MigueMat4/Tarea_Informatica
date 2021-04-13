
//Maria Esther Tiguila Soloj 
//carnet : 1627021
#include <iostream>

using namespace std;

int main()
{
	void area_circulo()
	{
		float radio, area;

		cout << "ingrese radio del del circulo :" << endl;
		cin >> radio;
		area = 3.14 * pow(radio, 2);
		cout << "el area del circulo es :" << area << endl;

	}

	void edad()
	{
		int edad;

		cout << "ingrese su edad :" << endl;
		cin >> edad;

		if (edad >= 18)
		{
			cout << " usted es mayor de edad : " << endl << endl;
		}
		else
		{
			cout << " usted es menor de edad : " << endl << endl;
		}
	}

	void multiplos()
	{
		for (int i = 200; i >= 5; i = i - 5)
		{
			cout << i << endl;
		}
	}
	int main()
	{
		int opcion;
		do
		{
			system("cls");
			cout << "1. area de un circulo : " << endl;
			cout << "2. conocer si una persona es mayor o menor de edad : " << endl;
			cout << "3. multiplos de 5 comprendidos entre 0 a 200 de forma descendente : " << endl;
			cout << "4. salir : " << endl;
			cout << "ingrese la opcion que desea : " << endl;
			cin >> opcion;

			if (opcion == 1)
			{
				area_circulo();
				system("pause");
			}
			else if (opcion == 2)
			{
				edad();
				system("pause");
			}
			else if (opcion == 3)
			{
				multiplos();
				system("pause");
			}
			else if (opcion == 4)
			{
				cout << " SALIENDO......." << endl << endl;
				system("pause");
			}
			else if (opcion != 4)
			{
				cout << "ERROR" << endl << endl;
				system("pause");
			}
		} while (opcion != 4);
		system("pause");
	}


    cout << "¡Hola estudiantes!" << endl;
	return 0;
}
