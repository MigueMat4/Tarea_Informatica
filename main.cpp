// Selvin Jordan Pérez Xicara 1605319
#include <iostream>

using namespace std;
int main(){
	int numero;
	int sumatoria;
	sumatoria = 0;
	
	do 
	{//parte del ciclo 
		cout << "ingrese un numero : ";
		cin >> numero;
		sumatoria = sumatoria + numero;		
	} while (numero > 0); 
	sumatoria = sumatoria - numero;
	
	
	cout << " el resutado es: " << sumatoria;
	
	return 0;
}
