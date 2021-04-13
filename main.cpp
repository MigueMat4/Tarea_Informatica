// Diana Melissa Morales Ruano  
#include <iostream>

using namespace std;
int main()
{
	//venta de teclados
	int a, p1;



	cout << "Ingrese la cantidad de teclados que desea comprar";
	cin >> a;

	if (a>8)
	{
		p1 = (100 * a);

		cout << "El total de su compra es:";
		cout << p1;
	}
	else if (a >= 4 && a <= 8)
	{
		p1 = (110 * a);
		cout << "El total de su compra es:";
		cout << p1;
	}
	else
	{
		p1 = (150 * a);
		cout << "El total de su compra es:";
		cout << p1;

	}

	cout << endl;
	system("pause");

}
