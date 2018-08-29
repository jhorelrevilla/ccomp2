#include <iostream>
#include "Cod.h"
using namespace std;

int main()
{
    string mensaje="hola como estas?";
    string men_codificado;
    Cod emisor(101);
    men_codificado=emisor.codificar(mensaje);
    cout<<men_codificado<<endl;
    men_codificado=emisor.decodificar(men_codificado,109);
    cout<<men_codificado<<endl;
    return 0;
}
