#include <iostream>
#include <ClaseCPP.h>


int main()
{
    //declarar una variable tipo objeto
    persona p1 = persona(15,"alejandro");
    persona p2(19,"Maria");

    //declarar un puntero a un objeto
    persona* punterop1 = new persona(15,"alejandro");

    punterop1=&p1;

    punterop1->leer();

     p2.correr();


    return 0;
}
