#ifndef COD_H
#define COD_H
#include<string.h>
#include<iostream>
using namespace std;

class Cod
{
    public:
        Cod(int);
        string codificar(string);
        string decodificar(string,int);
        int clave_pu;
    private:
        int clave_pr;
        int modulo(int,int);
        int obt_q(int,int);
        int ver_inver(int,int);
};

#endif // COD_H
