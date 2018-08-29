#include "Cod.h"

Cod::Cod(int cla){
    clave_pr=cla;
    clave_pu=ver_inver(cla,256);
}
int Cod::modulo(int a,int b){
    int co=a/b;
    int re=a-co*b;
    if(re<0){
        re+=b;
    }
    return re;
}
int Cod::obt_q(int a,int numero){
    int q=1;
    while(a*(q+1)<numero){
        q++;
    }
    return q;
}
int Cod::ver_inver(int a,int numero){
    int base=numero;
    int b=2;
    int p1=1;
    int p2=0;
    int inver=0;
    while (b!=0 ){
        int q=obt_q(a,numero);
        b=numero-(a*q);
        ////////////////////
        inver=p2 - p1*(q);//cout<<p2<<"-"<<p1<<"*("<<q<<")"<<endl;
        p2=p1;
        inver=modulo(inver,base);
        p1=inver;//cout<<inver<<endl;
        ////////////////////////////////////////////
        numero=a;
        a=b;
        if(b<=1){
            break;
        }
    }
    if(b==1){
        return inver;
    }
    else
        return 0;
}
string Cod::codificar(string men){
    int letra;
    int trad;
    string men_final;
    for(int i=0;i<men.size();i++){
        letra=int(men[i]);
        trad=modulo((letra*clave_pr),256);
        men_final+=trad;
    }
    return men_final;
}
string Cod::decodificar(string men,int clave){
    int letra;
    int trad;
    string men_final="";

    for(int i=0;i<men.size();i++){
        letra=int(men[i]);
        trad=modulo(letra*clave,256);
        men_final+=trad;
    }
    return men_final;
}


