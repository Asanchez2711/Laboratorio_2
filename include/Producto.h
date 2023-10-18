#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>

using namespace std;

#include "Fecha.h"
//en caso de estar trabajando en vs recordar agregar el pragma once y borrar lo default de codebloks
class Producto{

private:

    int _id;
    float _precio;
    char _proveedor[30];
    class Fecha _fechaAlta;
    char _descripcion[30];
    int _cantidad;
    char  _color[30];
    char _talle[30];
    char _marca[30];
    int _temporada;
    bool _estado;

public:

    void set_id(int id);
    void set_precio(float precio);
    void set_proveedor(std::string provedor);
    void setFechaAlta(int dia, int mes, int anio);
    void setCantidad(int cantidad);
    void setColor(string color);
    void setTalle(string talle);
    void setMarca(string marca);
    void setTemporada(int temporada);
    void set_estado( bool estado);

    int getId() const;
    float getPrecio() const;
    std::string getProveedor() const;
    class Fecha getFechaAlta() const;
    std::string getDescripcion() const;
    int getCantidad() const;
    string getColor() const;
    string getTalle() const;
    string getMarca() const;
    int getTemporada() const;
    bool getEstado() const;

    void cargar();
    void mostrar() const;


    };



#endif // PRODUCTO_H
