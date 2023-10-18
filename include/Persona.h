#ifndef PERSONA_H
#define PERSONA_H




#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"
class Persona{

protected:
        int _legajo;
        char _nombre[30];
        char _apellido[30];
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




#endif // PERSONA_H
