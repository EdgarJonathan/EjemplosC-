#ifndef ClaseCPP
#define ClaseCPP

#include <string>
class persona
{
    private://atributos
        int edad;
        std::string nombre;

    public: //metodos
        persona(int,std::string);
//        void leer();
//        void correr();
//        void mostrarPersona();

           virtual void mostrar();

};



#endif // ClaseCPP
