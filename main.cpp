// Pablo Andrés Cotí Arredondo 1653221
#include <iostream>

using namespace std;

int main(){
    //delcaracion de variables
    int height;
    float weight, imc;
    cout << "A continuación ingrese su peso (en libras) y su altura (en centímetros): ";
    //ingreso de datos
    cout << "Peso en libras: "; cin >> weight;
    cout << "Altura en centimetros: "; cin >> height;
    //convierto los datos a lo que necesito y los uso en la operacion
    weight = weight/2.20;
    height = height/100;
    imc = weight/(height*height);
    //procedimiento para ver la composicion corporal de la persona.
    if (imc < 18.5){
        cout << "Delgado";
    } else if(imc >= 18.5 and imc <= 24.9){
        cout << "Normal";
    } else if (imc >= 25 and imc <= 29.9){
        cout << "sobrepeso";
    } else if (imc >= 30){
        cout << "obeso";
    }
    return 0;
}
