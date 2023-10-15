#pragma once 
#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"
class Persona{

protected:
        int _legajo;
        std::string _nombre;
        std::string _apellido;
        class Fecha _fechaDeAlta;
        float _totalVendido;
        bool _estado;

public:

        void setLegajo(int legajo);
        void setNombre(string nombre);
        void setApellido(string apellido);
        void setFechaDeAlta(class Fecha fechaDeAlta);
        void setEstado(bool estado);

        int getLegajo() const;
        string getNombre() const;
        string getApellido() const;
        class Fecha getFechaDeAlta() const;
        bool getEstado() const;
        
        void cargar();        


};