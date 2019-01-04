#include <ClaseAlumno.h>

Alumno::Alumno (std::string _nombre, int _edad, std::string _codigoAlumno, float _notaFinal): persona(_edad,_nombre)
{
    codigoAlumno = _codigoAlumno;
    notaFinal =_notaFinal;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    std::cout<<"Codigo Alumno: "<<codigoAlumno<<std::endl;
    std::cout<<"Nota Final: "<<notaFinal<<std::endl;

}
