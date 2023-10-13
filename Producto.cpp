#include <string>

using namespace std;


#include "Producto.h"


void Producto::setFechaAlta(int dia, int mes, int anio){

        _fechaAlta.setDia(dia);
        _fechaAlta.setMes(mes);
        _fechaAlta.setAnio(anio);
        
        


}

void Producto::setCantidad(int cantidad)
{
    _cantidad=cantidad;
}

void Producto::set_id(int id) {
        _id = id;
    }

    void Producto::set_precio(float precio) {
        _precio = precio;
    }

    void Producto:: set_proveedor(std::string proveedor) {
        _proveedor = proveedor;
    }

    void Producto::set_estado(bool estado){
    _estado=estado;
    }

    int Producto::getId() const
    {
        return _id;
    }

    float Producto::getPrecio() const
    {
        return _precio;
    }

    std::string Producto::getProveedor() const
    {
        return _proveedor;
    }

    Fecha Producto::getFechaAlta() const
    {
        return _fechaAlta;
    }

    std::string Producto::getDescripcion() const
    {
        return _descripcion;
    }

    int Producto::getCantidad() const
    {
        return _cantidad;
    }

    bool Producto::getEstado() const
    {
        return _estado;
    }

    void Producto::cargar()
    {
        cout<<"Ingrese ID: "<<endl;
        cin>>_id;
        cout<<"Ingrese Precio: "<<endl;
        cin>>_precio;
        cout<<"Ingrese Proveedor: "<<endl;
        cin>>_proveedor;
        cout<<"Ingrese fecha de Alta de forma ordeada"<<endl;
        _fechaAlta.cargar();
        cout<<"Ingrese Cantidad: "<<endl;
        cin>>_cantidad;
        //cout<<"Ingrese Estado (0)Inactivo, (1)Activo: "<<endl;
        //cin>>_estado;
        
    }

    void Producto::mostrar() const

    {           
        cout<<"El Estado es: ";
        if(_estado==true){
            cout<<"Activo"<<endl;
        } else {
            cout<<"Inactivo"<<endl;
        
        }
        if(_estado==true){
        cout<<"El ID es: "<<_id<<endl;
        cout<<"El Precio es: "<<_precio<<endl;
        cout<<"El Proveedor es: "<<_proveedor<<endl;
        TO STRING//cout<<"La Fecha de Alta es: "<<endl;   
        cout<<"La Descripcion es: "<<_descripcion<<endl;
        cout<<"La cantidad es: "<<_cantidad<<endl;
        } else {
            cout<<"Producto ya no se encuentra"<<endl;
        }
        
    
    }

   