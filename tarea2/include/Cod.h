#ifndef COD_H
#define COD_H
#include<string.h>


#include <sstream>
#include <fstream>
#include <cstdlib>

#include<iostream>
using namespace std;

class Cod
{
    public:
        Cod(int);
        void codificar(string);
        void decodificar(string,int);
        int clave_pu;
    private:
        int tamanio=0;
        int ver_inver(int,int);
        void crear_archivo(string);
        string nameArchivo="mensaje.txt";
        string nameArchivo1="mensaje_co.txt";
        string nameArchivo2="mensaje_deco.txt";
        int clave_pr;
        int modulo(int,int);
        int obt_q(int,int);

};

#endif // COD_H
