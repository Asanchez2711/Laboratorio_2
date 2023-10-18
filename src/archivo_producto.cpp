#include "Producto.h"
#include "archivo_producto.h"

#include <iostream>
#include <string>




 int archivo_producto:: archivoProductoContar(){

        FILE *p;
        p=fopen(_nombre.c_str(), "rb");
        if(p==NULL) return -1;
        fseek(p, 0,2);
        int tam=ftell(p);
        fclose(p);
        return tam/sizeof(Producto);

 }

 Producto archivo_producto::leerProducto(int pos, Producto reg){


        reg.set_id(-1);
        FILE *p;
        p=fopen(_nombre.c_str(), "rb");
        if(p==NULL) return reg;
        fseek(p, sizeof(Producto)*pos,0);
        fread(&reg, sizeof reg,1, p);
        fclose(p);
        return reg;
 }


 bool archivo_producto:: BorrarProducto(Producto reg, int pos){

    FILE *p;
    p=fopen(_nombre.c_str(), "rb+");///+ agrega al modo lo que le falta
    if(p==NULL){
        return false;
    }
    fseek(p,sizeof (reg)*pos,0);
    bool escribio=fwrite(&reg,sizeof reg,1,p);
    fclose(p);
    return escribio;

 }

 bool archivo_producto:: ModificarProducto(Producto reg,int pos){

FILE *p;
    p=fopen(_nombre.c_str(), "rb+");
    if(p==NULL){
        return false;
    }
    fseek(p,sizeof (Producto)*pos,0);
    bool escribio=fwrite(&reg,sizeof reg,1,p);
    fclose(p);
    return escribio;

 }

 bool archivo_producto:: GuardarProducto(Producto reg){

       FILE *p;
    p=fopen(_nombre.c_str(),"ab");
    if(p==NULL){
        return false;
    }
    bool escribio=fwrite(&reg,sizeof (Producto),1,p);
	fclose(p);
    return escribio;

 }


 bool archivo_producto:: ListarProductos(){

Producto reg;
    FILE *pAlu;
    pAlu=fopen(_nombre.c_str(), "rb");
    if(pAlu==NULL){
        return false;
    }
    while(fread(&reg,sizeof reg,1,pAlu)==1){
        reg.mostrar();
        cout<<endl;
    }
    fclose(pAlu);
    return true;

 }

//unico metodo sin revisar
 int archivo_producto::BuscarIdProducto(int id, Producto reg){


    FILE *p;
    p=fopen(_nombre.c_str(), "rb");
    int pos=0;
    if(p==NULL){
        return -2;
    }
    while(fread(&reg,sizeof reg,1,p)==1){
        if(id==reg.getId()){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    return -1;
}

