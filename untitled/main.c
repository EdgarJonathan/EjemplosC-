#include <stdlib.h>
#include <stdio.h>

typedef struct nodoSecundario{
    int dato;
    struct nodoSecundario *siguiente;
}NodoSec;
typedef struct nodoPrincipal{
    int row;
    struct nodoPrincipal * abajo;
    struct nodoSecundario *  siguiente;
}NodoPrincipal;

void insertarMt(NodoPrincipal ** p, int row, int dato);
NodoPrincipal*insertarPrincipal(NodoPrincipal**p, int r);
void insertarSecundario(NodoSec **s,int d);
NodoPrincipal*crearNodoPrincipal(int r);
NodoSec*crearNodoSecundario(int d);
NodoPrincipal*buscarPrincipal(NodoPrincipal*p,int r);
void imprimir(NodoPrincipal*p);



int main(){
NodoPrincipal * primero =NULL;

insertarMt(&primero,5,3);
insertarMt(&primero,5,8);
insertarMt(&primero,5,2);
insertarMt(&primero,5,9);
insertarMt(&primero,3,1);
insertarMt(&primero,3,7);
insertarMt(&primero,3,3);
insertarMt(&primero,10,9);
insertarMt(&primero,10,5);
insertarMt(&primero,10,5);
insertarMt(&primero,8,11);
insertarMt(&primero,8,11);
insertarMt(&primero,8,11);
insertarMt(&primero,8,77);
insertarMt(&primero,8,11);
insertarMt(&primero,5,3);
insertarMt(&primero,10,0);
insertarMt(&primero,10,1);
insertarMt(&primero,10,2);

imprimir(primero);

return 0;
}


NodoPrincipal*crearNodoPrincipal(int r){
    NodoPrincipal* nuevo = (NodoPrincipal*)malloc(sizeof(NodoPrincipal));
    nuevo->row=r;
    nuevo->abajo=NULL;
    nuevo->siguiente=NULL;
    return nuevo;
}
NodoSec*crearNodoSecundario(int d){
    NodoSec* nuevo = (NodoSec*)malloc(sizeof(NodoSec));
    nuevo->dato = d;
    nuevo->siguiente = NULL;
    return nuevo;
}
NodoPrincipal* buscarPrincipal(NodoPrincipal* p,int r){
    NodoPrincipal *tmp = p;
    while(tmp!=NULL){
        if(tmp->row==r){
            return tmp;
        }
        tmp=tmp->abajo;
    }
    return NULL;
}

NodoSec* buscarSecundario(NodoSec* p,int r){

    NodoSec *tmp = p;
    while(tmp!=NULL){
        if(tmp->dato==r){
            return tmp;
        }
        tmp=tmp->siguiente;
    }
    return NULL;
}
NodoPrincipal *insertarPrincipal(NodoPrincipal**p,int r){


    NodoPrincipal*aux=buscarPrincipal(*p,r);
    NodoPrincipal*actual=*p;


    if(aux!=NULL){
        return aux;
    }else{

     NodoPrincipal* nuevo = crearNodoPrincipal(r);

     if(actual==NULL){
       *p=nuevo;

     }else{

     if(r < actual->row  )
     {
        nuevo->abajo =*p;
        *p=nuevo;

     }else
     {
        while(actual!=NULL)
        {
            if(actual->abajo ==NULL)
            {
                if(r >= actual->row )
                {
                    actual->abajo=nuevo;
                    break;
                }
            }else
            {
                if((r>= actual->row)&&(r < actual->abajo->row))
                {
                    nuevo->abajo = actual->abajo;
                    actual->abajo = nuevo;
                    break;
                }

            }


         actual=actual->abajo;
        }

   }

  }

        return *p;
    }

}
void insertarSecundario(NodoSec **s, int d){

    NodoSec*aux=buscarSecundario(*s,d);
    NodoSec*actual=*s;

    if(aux==NULL){

    NodoSec * nuevo= crearNodoSecundario(d);
    if(*s==NULL)
    {
       *s=nuevo;
    }else
    {
        if(d < actual->dato)
        {
            nuevo->siguiente =*s;
            *s=nuevo;
        }else
        {
            while(actual!=NULL)
            {
                if(actual->siguiente ==NULL)
                {
                    if(d>= actual->dato )
                    {
                        actual->siguiente=nuevo;
                        break;
                    }
                }else
                {
                    if((d>= actual->dato)&&(d < actual->siguiente->dato))
                    {
                        nuevo->siguiente = actual->siguiente;
                        actual->siguiente = nuevo;
                        break;
                    }

                }
             actual=actual->siguiente;
            }

        }

    }
    }

}

void insertarMt(NodoPrincipal ** p, int row, int dato){
    NodoPrincipal*principal = insertarPrincipal(p,row);
    insertarSecundario(&(principal->siguiente),dato); 
}
void imprimir(NodoPrincipal*p){
    NodoPrincipal*aux_p =p;

    while(aux_p!=NULL){
        NodoSec *aux_s= aux_p->siguiente;
        printf("+---+\n| %d |-> ",aux_p->row);
        while(aux_s!=NULL){
            if(aux_s->siguiente!=NULL){
                printf("%d -> ",aux_s->dato);
            }else{
                printf(" %d\n",aux_s->dato);
            }
            aux_s=aux_s->siguiente;
        }
        printf("+---+\n");
        aux_p=aux_p->abajo;
    }
}
