//Ejercicio Switch//
#include <iostream>
using namespace std;

int main() {

cout << "Este programa ah sido creado por Gezer Emmanuel Sanchez Aj ";  
     
 //Declaramos variables//
 int  Opcion;

 //Creamos un ciclo para las opciones//
 do { 
cout << "Menu de opciones\n";
cout << "1. Mostrar numeros del 1 al 5\n";
cout << "2. Mostrar nunmeros pares del 2 al 10\n";
cout << "3. Mostrar si un numero es positivo o negativo\n";
cout << "4. Salir\n";
cout << "Seleccione una de las opciones indicadas ";
cin >> Opcion;

//Usamos swtich para las opciones//
switch (Opcion) 
{
case 1:
cout <<"Numeros del 1 al 5";
     for (int i= 1; i <= 5; i++) {
     cout <<"\n\n";
     }
     break;

case 2:
cout << "Numeros pares del 2 al 10";
for (int i = 2; i <=10; i+=2) {
     cout << i << " ";
}
  break;

case 3:
int Numero;{
cout << "Ingrese un numero al azar";
cin >> Numero;

if (Numero > 0) {
     cout << "El numero es positivo";
} else if (Numero < 0) {
    cout << "El numero es negativo ";
} else {
     cout << "El numero es cero";
}
break;
}

case 4: 
cout << "Esperemos nuestro programa le haya sido util, bye ";
break;

default:
cout << "La opcion ingresada es invalida. Vuelva ingresa una de las opciones visibles ";
continue;
}
 } while (Opcion !=4);

     
     return 0;
}