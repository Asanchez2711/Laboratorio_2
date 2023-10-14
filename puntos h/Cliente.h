#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"
#include "Empleado.h"

class Cliente:public Empleado{

    private: 
    int _totalGastado;

    public:
    void setTotalGastado(int totalGastado);

    int getTotalGastado() const;

    

};