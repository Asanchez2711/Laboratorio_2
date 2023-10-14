#pragma once
#include <iostream>
#include <string>
#include "Producto.h"
class archivo_producto
{
    public:

        int archivoProductoContar();
        Producto leerProducto(int pos);
        bool BorrarProducto(Producto reg, int pos);
        bool ModificarProducto(Producto reg,int pos);
        bool GuardarProducto();
        bool ListarProductos();
        int BuscarIdProducto();


    private:

        std::string nombre;
};