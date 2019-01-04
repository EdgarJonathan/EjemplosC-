#include <iostream>
#include <ClaseCPP.h>

//contructor, nos sirve para inicializar los atributos
persona::persona(int _edad,std::string _nombre)
{
    edad=_edad;
    nombre=_nombre;
}

//void persona::leer()
//{
//    std::cout<<"soy "<<nombre<<" y estoy leyendo un libro"<<std::endl;
//}

//void persona::correr()
//{
//    std::cout <<"soy "<<nombre<<" y estoy corriendo una maraton, tengo "<<edad<<" anios"<< std::endl;
//}

void persona::mostrarPersona()
{
         std::cout<<"nombre: "<<nombre<<std::endl;
         std::cout<<"edad: "<<edad<<std::endl;
}
