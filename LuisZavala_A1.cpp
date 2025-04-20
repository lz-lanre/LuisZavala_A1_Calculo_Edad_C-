/*Luis Zavala A1*/

/*librerias a utilizar*/
#include <stdio.h>
#include <iostream>

int main()
{
    int edad; /*declaracion de variable para almacenar la edad ingresada (tipo entero)*/
    std::cout<<"Escribe tu edad: "; /*imprime texto para solicitar edad*/
    std::cin>>edad; /*lee y guarda el valor ingresado en variable*/
    if (edad<18) /*pregunta si el valor agregado es menor a 18*/
    {  
        std::cout<<"Eres menor de edad" << std::endl; /*si lo es, imprime el mensaje que es menor de edad*/
    }
    else 
    {
        std::cout<<"Eres mayor de edad" << std::endl; /*si no lo es, imprime el mensaje que es mayor de edad*/
    }
    return 0;
}