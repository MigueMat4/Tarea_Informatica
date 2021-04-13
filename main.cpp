// <Ingrese su nombre completo y número de carnet>
// Nery Daniel Sarat Az - 1599421
#include <iostream>

using namespace std;


	float re1 = 0;
	float re2 = 0;
	float re3 = 0;
	float re4 = 0;
	float re5 = 0;

	float operar(float n1, float n2, float n3, float n4, float n5, string op)
	{


		if (op == "suma")
		{
			re1 = n1 + n1;
			re2 = n2 + n2;
			re3 = n3 + n3;
			re4 = n4 + n4;
			re5 = n5 + n5;

		}
		if (op == "resta")
		{
			re1 = n1 - n1;
			re2 = n2 - n2;
			re3 = n3 - n3;
			re4 = n4 - n4;
			re5 = n5 - n5;
		}
		if (op == "multiplicacion")
		{
			re1 = n1 * n1;
			re2 = n2 * n2;
			re3 = n3 * n3;
			re4 = n4 * n4;
			re5 = n5 * n5;
		}
		if (op == "division")
		{
			re1 = n1 / n1;
			re2 = n2 / n2;
			re3 = n3 / n3;
			re4 = n4 / n4;
			re5 = n5 / n5;
		}
		if (op == "modulo")
		{
			re1 = n1 / n1;
			re2 = n2 / n2;
			re3 = n3 / n3;
			re4 = n4 / n4;
			re5 = n5 / n5;
		}

		return 0;



	}



	int main()
	{
		float n1 = 0;
		float n2 = 0;
		float n3 = 0;
		float n4 = 0;
		float n5 = 0;

		string operacion;

		cout << " Ingrese 5 numeros enteros :" << endl;
		cin >> n1;
		cin >> n2;
		cin >> n3;
		cin >> n4;
		cin >> n5;



		cout << " Indique la operacion a realizar (suma , resta , multiplicacion , division , modulo ) :" << endl;
		cin >> operacion;

		operar(n1, n2, n3, n4, n5, operacion);




		cout << " El resultado es :" << re1 << " y " << re2 << "y" << re3 << " y " << re4 << " y " << re5 << endl;
		
       return 0;
    }
