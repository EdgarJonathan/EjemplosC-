#include <iostream>
#include "ABB.h"

using namespace std;

int main()
{
    ABB* arbol = new ABB();

    arbol->Insertar(34);
    arbol->Insertar(45);
    arbol->Insertar(25);
    arbol->Insertar(30);
    arbol->Insertar(7);
    arbol->Insertar(96);
    arbol->Insertar(0);
    arbol->Insertar(80);


//    arbol->Buscar(34);

//    cout<<arbol->Buscar(34) <<endl;
//    cout<<arbol->Buscar(34) <<endl;
//    cout<<arbol->Buscar(34) <<endl;
//    cout<<arbol->Buscar(34) <<endl;
//    cout<<arbol->Buscar(34) <<endl;


    cout<<arbol->Contar_Hojas(arbol->raiz)<<endl;

    cout<<arbol->contarNodos()<<endl;

    arbol->Graficar();

    return 0;
}

