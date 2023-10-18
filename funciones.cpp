#include <iostream>

using namespace std;

void LimpiarPantalla(){
    system("cls");
}

void LimpiaryPausar(){
    system("pause");
    system("cls");
}

void Menu(){

    cout<<"Bienvenido admin"<<endl;
    cout<<endl;
    cout<<"Indique la accion a realizar: "<<endl;
    cout<<endl;
    cout<<"***************************"<<endl;
    cout<<"Bienvenido al menu de ventas"<<endl;
    cout<<"***************************"<<endl;
    cout<<"1-DAR DE ALTA UN PRODUCTO"<<endl;
    cout<<"2-DAR DE ALTA UN VENDEDOR"<<endl;
    cout<<"3-DAR DE BAJA UN PRODUCTO"<<endl;
    cout<<"4-DAR DE BAJA UN VENDEDOR"<<endl;
    cout<<"5-VER IMPORTE RECAUDADO"<<endl;
    cout<<"6-VER IMPORTE RECAUDADO POR VENDEDOR"<<endl;
    cout<<"7-MODIFICAR UN PRODUCTO"<<endl;
    cout<<"8-LISTAR PRODUCTOS"<<endl;
    cout<<"9-LISTAR VENDEDORES"<<endl;
    cout<<"10-BUSCAR VENDEDOR"<<endl;
    cout<<"***************************"<<endl;
    cout<<"0-SALIR"<<endl;

}

int Login(){
string id,contrasena;
cout<<"Ingrese usuario: "<<endl;
cin>>id;
cout<<"Ingrese clave: "<<endl;
cin>>contrasena;

if(id=="admin"&&contrasena=="admin"){
   return 1;
}
else{
    cout<<"Contrasenia invalida "<<endl;
    LimpiaryPausar();
    return 0;
}
}
