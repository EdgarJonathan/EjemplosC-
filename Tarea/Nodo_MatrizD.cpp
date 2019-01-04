#include "Nodo_MatrizD.h"
nodo_F* Matriz::Buscar(nodo_F **p, int d)
{
    nodo_F* temp =*p;

    while(temp!=NULL)
    {
        if(temp->f==d)
        {
            return temp;
        }
        temp= temp->abajo;
    }

    return NULL;
}
nodo_C* Matriz::Buscar(nodo_C **p, int d)
{
    nodo_C* temp =*p;

    while(temp!=NULL)
    {
        if(temp->c==d)
        {
            return temp;
        }
        temp= temp->abajo;
    }

    return NULL;
}

void crearPosicion(int fila, int columna)
{


}

std::string inNodoFila(int fila){

}
std::string inNodoFila(int columna){

}

