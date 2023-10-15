#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"

class Empleado{
    private:
        int _legajo;
        string _nombre;
        string _apellido;
        class Fecha _fechaDeAlta;
        float _totalVendido;
        bool _estado;
        //PRUEBA
    public:
        Empleado();

        void setLegajo(int legajo);
        void setNombre(string nombre);
        void setApellido(string apellido);
        void setFechaDeAlta(class Fecha fechaDeAlta);
        void setTotalVendido(float totalVendido);
        void setEstado(bool estado);

        int getLegajo() const;
        string getNombre() const;
        string getApellido() const;
        class Fecha getFechaDeAlta() const;
        float getTotalVendido() const;
        bool getEstado() const;
        
        void cargar();
        void mostrar() const;
        


};