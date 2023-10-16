#include "puntos h/Persona.h"
//PRUE
#include "puntos h/Fecha.h"
using namespace std;

void Persona::setLegajo(int legajo)
{
    _legajo=legajo;
}
void Persona::setNombre(string nombre)
{
    _nombre=nombre;
}

void Persona::setApellido(string apellido)
{
    _apellido=apellido;
}

void Persona::setFechaDeAlta(Fecha fechaDeAlta)
{
    _fechaDeAlta.cargar();
}

void Persona::setEstado(bool estado)
{
    _estado=estado;
}

int Persona::getLegajo() const
{
    return _legajo;
}

string Persona::getNombre() const
{
    return string(_nombre);
}

string Persona::getApellido() const
{
    return string(_apellido);
}

Fecha Persona::getFechaDeAlta() const
{
    return Fecha(_fechaDeAlta);
}

bool Persona::getEstado() const
{
    return _estado;
}

void Persona::cargar()
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


