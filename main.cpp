// Miguel Alfonzo Macario Velasquez 1597421

//programa para determinar el si el salario de los diferentes trabajadores es algo, medio o bajo.

#include <iostream>
#include <math.h>
#include <conio.h>

int main(int argc, char **argv)
{
	int empleado1, empleado2, empleado3, empleado4, empleado5; // Variable para almacenar el salario de cada uno

	std::cout << "Ingrese el salario del Primer Empleado: " << std::endl;//Almacenar el valor de cad variable
	std::cin >> empleado1;
	std::cout << "Ingrese el salario del Segundo Empleado: " << std::endl;
	std::cin >> empleado2;
	std::cout << "Ingrese el salario del Tercer Empleado: " << std::endl;
	std::cin >> empleado3;
	std::cout << "Ingrese el salario del Cuarto Empleado: " << std::endl;
	std::cin >> empleado4;
	std::cout << "Ingrese el salario del Quinto Empleado: " << std::endl;
	std::cin >> empleado5;

	if (empleado1 <= 7000)            //3 Condiciones por cada empleado para determinar si tiene salario bajo, medio o alto
	{
		std::cout << "El primer empleado tiene un salario bajo" << std::endl;
	}
	else if (empleado1 <= 15000)
	{
		std::cout << "El primer empleado tiene un salario medio" << std::endl;
	}
	else if (empleado1 > 15000)
	{
		std::cout << "El primer empleado tiene un salario alto" << std::endl;
	}

	if (empleado2 <= 7000)
	{
		std::cout << "El segundo empleado tiene un salario bajo" << std::endl;
	}
	else if (empleado2 <= 15000)
	{
		std::cout << "El segundo empleado tiene un salario medio" << std::endl;
	}
	else if (empleado2 > 15000)
	{
		std::cout << "El segundo empleado tiene un salario alto" << std::endl;
	}

	if (empleado3 <= 7000)
	{
		std::cout << "El tercer empleado tiene un salario bajo" << std::endl;
	}
	else if (empleado3 <= 15000)
	{
		std::cout << "El tercer empleado tiene un salario medio" << std::endl;
	}
	else if (empleado3 > 15000)
	{
		std::cout << "El tercer empleado tiene un salario alto" << std::endl;
	}

	if (empleado4 <= 7000)
	{
		std::cout << "El cuarto empleado tiene un salario bajo" << std::endl;
	}
	else if (empleado4 <= 15000)
	{
		std::cout << "El cuarto empleado tiene un salario medio" << std::endl;
	}
	else if (empleado4 > 15000)
	{
		std::cout << "El cuarto empleado tiene un salario alto" << std::endl;
	}

	if (empleado5 <= 7000)
	{
		std::cout << "El quinto empleado tiene un salario bajo" << std::endl;
	}
	else if (empleado5 <= 15000)
	{
		std::cout << "El quinto empleado tiene un salario medio" << std::endl;
	}
	else if
		(empleado5 > 15000)
	{
		std::cout << "El quinto empleado tiene un salario alto" << std::endl;
	}

	return 0;
}
