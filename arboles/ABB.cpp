#include "ABB.h"

ABB::ABB(){
    raiz=NULL;
}

bool ABB::Buscar(int numero){
    return Buscar(raiz,numero);
}

bool ABB::Buscar(NodoABB* raiz, int numero){
    //bool salida;
    if(raiz == NULL){
        return false;
    }else if(numero == raiz->numero){
        return true;
    }else if(numero < raiz->numero){
        return Buscar(raiz->getIzquierdo(),numero);
    }else if(numero > raiz->numero){
        return Buscar(raiz->getDerecha(),numero);
    }
    return false;
}

void ABB::Insertar(int numero){
    raiz = Insertar(raiz,numero);
}

NodoABB* ABB::Insertar(NodoABB *raiz, int nuevo){
    if(raiz == NULL){
        raiz = new NodoABB(nuevo);
    }else if(nuevo < raiz->numero){
        NodoABB *izq;
        izq = Insertar(raiz->getIzquierdo(),nuevo);
        raiz->setIzquierdo(izq);
    }else if (nuevo > raiz->numero){
        NodoABB *der;
        der = Insertar(raiz->getDerecha(),nuevo);
        raiz->setDerecha(der);
    }
    return raiz;
}

void ABB::Eliminar(int cambio){
    raiz = Eliminar(raiz, cambio);
}

NodoABB* ABB::Eliminar(NodoABB* raiz, int cambio){
    if(raiz == NULL){

    }else if(cambio < raiz->numero){
        NodoABB *izq;
        izq = Eliminar(raiz->getIzquierdo(),cambio);
        raiz->setIzquierdo(izq);
    }else if (cambio > raiz->numero){
        NodoABB *der;
        der = Eliminar(raiz->getDerecha(),cambio);
        raiz->setDerecha(der);
    }else{
        NodoABB *q;
        q = raiz;
        if(q->getIzquierdo() == NULL){
            raiz = q->getDerecha();
        }else if(q->getDerecha() == NULL){
            raiz = q->getIzquierdo();
        }else{
            q = Reemplazar(q);
        }
        q = NULL;
    }
    return raiz;
}

NodoABB* ABB::Reemplazar(NodoABB *actual){
    NodoABB *a, *p;
    p = actual;
    a = actual->getIzquierdo();
    while(a->getDerecha() != NULL){
        p = a;
        a = a->getDerecha();
    }
    actual->setNumero(a->getNumero());
    if(p == actual){
        p->setIzquierdo(a->getIzquierdo());
    }else{
        p->setDerecha(a->getDerecha());
    }
    return a;
}


void ABB::Modificar(int buscar, int cambio){
    //raiz = Modificar(raiz,cambio,carnet);
    raiz = Eliminar(raiz, buscar);
    raiz = Insertar(raiz, cambio);
}

/*NodoABB* ABB::Modificar(NodoABB* raiz, struct estudiante cambio, int carnet){
    if(raiz->estudiante.carnet == carnet){
        raiz->estudiante.carnet = cambio.carnet;
        raiz->estudiante.dpi = cambio.dpi;
        raiz->estudiante.nombre = cambio.nombre;
        raiz->estudiante.apellido = cambio.apellido;
        raiz->estudiante.fecha_nacimiento = cambio.fecha_nacimiento;
        raiz->estudiante.direccion = cambio.direccion;
        raiz->estudiante.creditos = cambio.creditos;
        *********** PARA LA IMAGEN ***********
        raiz->estudiante.password = cambio.password;


    }else if(carnet < raiz->estudiante.carnet){
        NodoABB *izq;
        izq = Modificar(raiz->getIzquierdo(),cambio,carnet);
        raiz->setIzquierdo(izq);
    }else if (carnet > raiz->estudiante.carnet){
        NodoABB *der;
        der = Modificar(raiz->getDerecha(),cambio, carnet);
        raiz->setDerecha(der);
    }
    return raiz;
}*/

































