#include "puntos h/Empleado.h"
#include "Empleado.h"


using namespace std;

void Empleado::setLegajo(int legajo)
{
    _legajo=legajo;
}
void Empleado::setNombre(string nombre)
{
    _nombre=nombre;
}

void Empleado::setApellido(string apellido)
{
    _apellido=apellido;
}

void Empleado::setFechaDeAlta(Fecha fechaDeAlta)
{
    _fechaDeAlta.cargar();
}
void Empleado::setEstado(bool estado)
{
    _estado=estado;
}

int Empleado::getLegajo() const
{
    return _legajo;
}

string Empleado::getNombre() const
{
    return string(_nombre);
}

string Empleado::getApellido() const
{
    return string(_apellido);
}

Fecha Empleado::getFechaDeAlta() const
{
    return Fecha(_fechaDeAlta);
}

bool Empleado::getEstado() const
{
    return _estado;
}

void Empleado::cargar()
{
    cout<<"Ingrese Legajo: "<<endl;
    cin>>_legajo;
    cout<<"Ingrese nombre: "<<endl;
    cin>>_nombre;
    cout<<"Ingrese apellido: "<<endl;
    cin>>_apellido;
    cout<<"Ingrese fecha de Alta de forma ordeada"<<endl;
    _fechaDeAlta.cargar();        
}

void Empleado::mostrar() const
{
    cout<<"El Estado es: ";
        if(_estado==true){
            cout<<"Activo"<<endl;
        } else {
            cout<<"Inactivo"<<endl;        
        }
        if(_estado==true){
        cout<<"El Legajo es: "<<_legajo<<endl;
        cout<<"El nombre es: "<<_nombre<<endl;
        cout<<"El apellido es: "<<_apellido<<endl;
        cout<<"La Fecha de Alta es: "<<_fechaDeAlta.toString(_fechaDeAlta);   
        
        } else {
            cout<<"Producto ya no se encuentra"<<endl;
        }
}
