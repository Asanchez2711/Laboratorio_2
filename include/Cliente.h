#ifndef CLIENTE_H
#define CLIENTE_H


#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"
#include "Persona.h"

class Cliente:public Persona{

    private:
    int _totalGastado;
    public:
    Cliente();


    void setTotalGastado(int totalGastado);

    int getTotalGastado() const;

    void Cargar();

    void Mostrar()const;



};

#endif // CLIENTE_H
