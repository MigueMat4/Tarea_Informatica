// Rodrigo Benjamin Monterroso Martinez
#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "ingrese una letra" << endl; cin >> a;
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		cout << "Es una vocal";
	else
		cout << "No es vocal";
	system("pause");
}
