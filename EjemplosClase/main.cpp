#include <iostream>
#include <string>
struct info
{
    int carnet;
    std::string nombre;
};


struct info2
{
    unsigned long int noDPI;
    std::string nombre;
    std::string apellidos;
};

template<class Dato>
class Nodo
{
    public:
        Dato Info;
        Nodo<Dato>* ptr_sig;

        //constructores
        Nodo(Dato i)
        {
            Info=i;
            ptr_sig=NULL;
        }

        Nodo(Dato i,Nodo<Dato>*ptr)
        {
            Info=i;
            ptr_sig=ptr;
        }


        //metodos
        void setInfo(Dato i)
        {
            Info=i;
        }

        void setPtrSig(Nodo<Dato>*ptr)
        {
            ptr_sig=ptr;
        }

        Dato getInfo()
        {
            return Info;
        }

        Nodo<Dato>*getPtrSig()
        {
            return ptr_sig;
        }

};

int main()
{
    info i;
    i.carnet=1001;
    i.nombre ="asdf";
    Nodo<info> n =Nodo<info>(i);

    info2 i2;
    i2.apellidos ="sdf";
    i2.noDPI = 10005;
    i2.nombre ="asdff";

    Nodo<int> n2 = Nodo<int>(465);

    return 0;
}
