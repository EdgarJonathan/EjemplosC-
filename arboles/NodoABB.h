#ifndef NODOABB_H
#define NODOABB_H
#include <string>


class NodoABB{
public:

    int numero;
    NodoABB* derecha;
    NodoABB* izquierda;

    //*********** CONSTRUCTOR **********
    NodoABB(int n);

    //void setEstudiante(struct estudiante cambio);
    //struct estudiante getEstudiante();
    void setNumero(int n);
    int getNumero();


    void setIzquierdo(NodoABB *n);
    NodoABB *getIzquierdo();

    void setDerecha(NodoABB *n);
    NodoABB *getDerecha();

};




#endif
