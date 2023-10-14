#pragma once
#include <iostream>
#include <string>

using namespace std;

#include "puntos h/Fecha.h"
#include "puntos h/Cliente.h"


void Cliente::setTotalGastado(int totalGastado)
{
    _totalGastado=totalGastado;
}

int Cliente::getTotalGastado() const
{
    return _totalGastado;
}
