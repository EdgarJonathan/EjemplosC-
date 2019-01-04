#ifndef ClaseDestructor
#define ClaseDestructor

#include <string>

class perro
{
    private://atributos
        std::string nombre;
        std::string raza;

    public: //metodos
        perro(std::string _raza,std::string _nombre); //contructor
        ~perro();//desctructorr
        void mostrarDatos();
        void jugar();

};

#endif // ClaseDestructor
