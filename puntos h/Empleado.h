#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "Persona.h"
#include "Fecha.h"

class Empleado:public Persona{
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