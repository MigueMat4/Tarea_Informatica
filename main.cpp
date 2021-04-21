// Julio Josue ANibal Cojom Pacaja_1639021

#include <iostream>  
#include<cmath>  

  using namespace std;


  int main()
  {  
      //declaracion de variables
      int r,area,volumen;
	  
    //entrada de datos
	cout<<"Ingrese el radio de la circunferencia:  ";
	cin>>r;
	cout<<endl;

    //operacion para encontrar el area del circulo
	area=3.14*(r*r);
	cout<<"El area de la circunferencia es:  "<<area<<endl;

    //operacion para encontrar el volumen del circulo
	volumen=4*3.14*r*r*r/3;
	cout<<"El volumen es: "<<volumen<<endl;
	return 0;
}
