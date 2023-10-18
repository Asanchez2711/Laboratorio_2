#ifndef ARCHIVO_PRODUCTO_H
#define ARCHIVO_PRODUCTO_H

#include "Producto.h"
#include <iostream>
#include <string>

class archivo_producto
{
    public:

        int archivoProductoContar();
        Producto leerProducto(int pos, Producto reg);
        bool BorrarProducto(Producto reg, int pos);
        bool ModificarProducto(Producto reg,int pos);
        bool GuardarProducto(Producto reg);
        bool ListarProductos();
        int BuscarIdProducto(int id, Producto reg);
        archivo_producto(std::string nombre ){
        _nombre=nombre;
        }

    private:

        std::string _nombre;
};

#endif // ARCHIVO_PRODUCTO_H
