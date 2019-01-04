#ifndef ABB_H
#define ABB_H

#include <list>
#include <string>
#include "NodoABB.h"

class ABB{
public:
    NodoABB* raiz;
    ABB();

    bool Buscar(int numero);
    bool Buscar(NodoABB* raiz, int numero);

    void Insertar(int numero);
    NodoABB* Insertar(NodoABB* raiz, int nuevo);

    void Eliminar(int cambio);
    NodoABB* Eliminar(NodoABB* raiz, int numero);
    NodoABB* Reemplazar(NodoABB* actual);

    void Modificar(int buscar, int cambio);
    //NodoABB* Modificar(NodoABB* raiz, struct estudiante cambio, int carnet);

    void Graficar(void);
    void Generar_Grafo(NodoABB *raiz);


    //metodos de prueba

    //cantidad de nodos

    unsigned int contarNodos();
    unsigned int cantidadNodos(NodoABB* raiz);

    int Contar_Hojas(NodoABB *raiz);
};

#endif
