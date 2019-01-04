#ifndef ClaseAlumno
#define ClaseAlumno

#include <string>
#include <ClaseCPP.h>

class Alumno : public persona
{

private:
    std::string codigoAlumno;
    float notaFinal;

public:
     Alumno(std::string _nombre, int _edad, std::string _codigoAlumno, float _notaFinal);//constructor clase alumno
     void mostrarAlumno();


};


#endif // ClaseAlumno
