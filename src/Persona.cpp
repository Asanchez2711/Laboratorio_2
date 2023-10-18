#include "Persona.h"


//PRUE
#include "Fecha.h"
#include <string>

void Persona::setLegajo(int legajo)
{
    _legajo=legajo;
}
void Persona::setNombre(string nombre)
{
    strcpy(_nombre, nombre.c_str());
}

void Persona::setApellido(string apellido)
{
    strcpy(_apellido, apellido.c_str());
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
    return _nombre;
}

string Persona::getApellido() const
{
    return _apellido;
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
    cin.getline(_apellido, 30);
    cout<<"Ingrese fecha de Alta de forma ordeada"<<endl;
    _fechaDeAlta.cargar();

}
