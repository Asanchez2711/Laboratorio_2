#ifndef EMPLEADO_H
#define EMPLEADO_H


#include <iostream>
#include <string>

using namespace std;


#include "Fecha.h"
#include "Persona.h"

class Empleado: public Persona{
    private:
        class Fecha _fechaDeAlta;
        class Persona p;
        float _totalVendido;

    public:
        Empleado();

        void setTotalVendido(float totalVendido);
        float getTotalVendido() const;

        void cargar();
        void mostrar() const;



};

#endif // EMPLEADO_H
