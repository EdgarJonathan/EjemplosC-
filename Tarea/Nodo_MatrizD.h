#ifndef NODO_MATRIZD_H
#define NODO_MATRIZD_H

#include <string>

struct nodo_M{
    std::string contenido;
    struct nodo_M* siguiente;
    struct nodo_M* atras;
    struct nodo_M* arriba;
    struct nodo_M* abajo;

};

struct nodo_F{
    int f;
    nodo_F* arriba;
    nodo_F* abajo;
    nodo_M* mat;
};

struct nodo_C{
    int c;
    nodo_C* sig;
    nodo_C* atras;
    nodo_M* mat;
};


class Matriz{

  private:
    nodo_F* Buscar(nodo_F **p, int d);
    nodo_C* Buscar(nodo_C **p, int d);
    std::string inNodoFila(int fila);
    std::string inNodoColumna(int columna);

    nodo_F* primero_F;
    nodo_F* ultimo_F;

    nodo_C* primero_C;
    nodo_C* ultimo_C;

  public:

    void crearPosicion(int fila, int columna);
};



#endif
