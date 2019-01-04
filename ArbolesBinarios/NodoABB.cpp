#include "NodoABB.h"

NodoABB::NodoABB(int n){
    setNumero(n);
    derecha = NULL;
    izquierda = NULL;
}


void NodoABB::setIzquierdo(NodoABB *n){
    izquierda = n;
}

NodoABB *NodoABB::getIzquierdo(){
    return izquierda;
}

void NodoABB::setDerecha(NodoABB *n){
    derecha = n;
}

NodoABB *NodoABB::getDerecha(){
    return derecha;
}

void NodoABB::setNumero(int n){
    numero = n;
}

int NodoABB::getNumero(){
    return numero;
}
