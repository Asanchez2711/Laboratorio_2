
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
        archivo_producto(std::string nombre ){
            _nombre=nombre;
        }

    private:

        std::string _nombre;
};