#include "Producto.h"

#include <string>

using namespace std;




void Producto::setFechaAlta(int dia, int mes, int anio){

        _fechaAlta.setDia(dia);
        _fechaAlta.setMes(mes);
        _fechaAlta.setAnio(anio);




}

void Producto::setCantidad(int cantidad)
{
    _cantidad=cantidad;
}

void Producto::setColor(string color)
{
    strcpy(_color, color.c_str());
    //_color=color;
}

void Producto::setTalle(string talle)
{
    strcpy(_talle, talle.c_str());
   // _talle=talle;
}

void Producto::setMarca(string marca)
{
    strcpy(_marca, marca.c_str());
    //_marca=marca;
}

void Producto::setTemporada(int temporada)
{
    _temporada=temporada;
}

void Producto::set_id(int id) {
        _id = id;
    }

    void Producto::set_precio(float precio) {
        _precio = precio;
    }

    void Producto:: set_proveedor(std::string proveedor) {
         strcpy(_proveedor, proveedor.c_str());
        //_proveedor = proveedor;
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

    string Producto::getColor() const
    {
        return string(_color);
    }

    string Producto::getTalle() const
    {
        return string(_talle);
    }

    string Producto::getMarca() const
    {
        return string(_marca);
    }

    int Producto::getTemporada() const
    {
        return _temporada;
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
        cin.ignore();
        cin.getline(_proveedor, 30);
        if(_proveedor[0]!='\0'){
        cout<<"Ingrese fecha de Alta de forma ordeada"<<endl;
        _fechaAlta.cargar();
        cout<<endl;
        }
        cout<<"Ingrese la descripcion: "<<endl;
        cin.ignore();
        cin.getline(_descripcion, 30);
        cout<<"Ingrese Cantidad: "<<endl;
        cin>>_cantidad;
        cout<<"Ingrese color: "<<endl;
        cin.ignore();
        cin.getline(_color, 30);
        cout<<"Ingrese talle: "<<endl;
        cin>>_talle;
        cout<<"Ingrese marca: "<<endl;
        cin.ignore();
        cin.getline(_marca, 30);

        cout<<"Ingrese temporada: "<<endl;
        cin>>_temporada;
        _estado=true;

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
        cout<<"La Fecha de Alta es: "<<_fechaAlta.toString(_fechaAlta);
        cout<<endl;
        cout<<"La Descripcion es: "<<_descripcion<<endl;
        cout<<"La cantidad es: "<<_cantidad<<endl;
        cout<<"El color es: "<<_color<<endl;
        cout<<"El talle es: "<<_talle<<endl;
        cout<<"La marca es: "<<_marca<<endl;
        cout<<"La temporada es: "<<_temporada<<endl;
        } else {
            cout<<"Producto ya no se encuentra"<<endl;
        }


    }
