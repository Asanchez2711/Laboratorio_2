//#ifndef PRODUCTO_H
//#define PRODUCTO_H
#pragma once

#include <string>

#include "puntos h/Fecha.h"
//en caso de estar trabajando en vs recordar agregar el pragma once y borrar lo default de codebloks
class Producto{

private:

    int _id;
    float _precio;
    std::string _proveedor;
    class Fecha _fechaAlta;
    std::string _descripcion;
    int _cantidad;
    bool _estado;

public:
    void set_id(int id);
    void set_precio(float precio);
    void set_proveedor(std::string provedor);
    void setFechaAlta(int dia, int mes, int anio);
    void setCantidad(int cantidad);
    void set_estado( bool estado);

    int getId() const;
    float getPrecio() const;
    std::string getProveedor() const;
    class Fecha getFechaAlta() const;
    std::string getDescripcion() const;
    int getCantidad() const;
    bool getEstado() const;

    void cargar();
    void mostrar() const;
    

    };

//#endif // PRODUCTO_H
