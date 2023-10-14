#ifndef FECHA_H
#define FECHA_H



#include <iostream>

#include <string.h>

class Fecha{
    private:
        int _dia,_mes,_anio;



    public:
        void AgregarDia();
        void RestarDia();
        Fecha();
        Fecha(int dia,int mes,int anio);

        void AgregarDias(int dias);
        

        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);

        int getDia() const;
        int getMes() const;
        int getAnio() const;

        void cargar();
        void mostrar() const;
        std::string toString(Fecha fecha) const;
};

#endif // FECHA_H
