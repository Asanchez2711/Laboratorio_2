

#include<iostream>
#include<cstring>
#include <cstdlib>

using namespace std;

#include "Fecha.h"
#include "Producto.h"
#include "archivo_producto.h"
#include "funciones.h"

int main (){

bool estado=true;
int opcion, comprobar;
comprobar=Login();
LimpiarPantalla();
while(estado!=false && comprobar!=0){

Menu();
cin>>opcion;
LimpiarPantalla();
switch(opcion){

    case 1:{
    cout<<endl;
    cout<<"Esta por ingresar un producto "<<endl;
    archivo_producto arch("producto.dat");
    cout<<endl;
    Producto obj;
    obj.cargar();
    arch.GuardarProducto(obj);
    LimpiarPantalla();
    break;
}
    case 3:

    break;

    case 4:

    break;

    case 5:

    break;

    case 6:

    break;

    case 7:

    break;

    case 8:{
    archivo_producto arch("producto.dat");
    arch.ListarProductos();
    LimpiaryPausar();
    break;
}

    case 0:
        estado=false;
    break;
}

}
return 0;}

