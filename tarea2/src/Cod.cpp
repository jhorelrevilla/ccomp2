#include "Cod.h"

Cod::Cod(int cla){
    clave_pr=cla;
    clave_pu=ver_inver(cla,256);
    cout<<clave_pu<<endl;
    //////////////////////////////
    crear_archivo(nameArchivo);
    //////////////////////////////
}
void Cod::crear_archivo(string a){
    ofstream fs(a.c_str());
    if(fs.fail()){
        cout<<"no existe"<<endl;
    }
    fs.close();
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
        inver=p2 - p1*(q);
        //cout<<numero<<"="<<q<<"*"<<a<<"+"<<b<<endl;
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
void Cod::codificar(string men){

    ofstream fs(nameArchivo.c_str(),ios::out);
    fs<<men<<endl;
    fs.close();

    int letra;
    int trad;
    string men_final;
    for(int i=0;i<men.size();i++){
        letra=int(men[i]);
        trad=modulo((letra*clave_pr),256);
        men_final+=trad;
    }
    ofstream ff(nameArchivo1.c_str(), ios::out);
    ff << men_final << endl;
    ff.close();


    //return men_final;
}
void Cod::decodificar(string men,int clave){
    crear_archivo(nameArchivo2);
    string linea;
    //ifstream fs(nameArchivo2.c_str(),ios::in);
    //while (!fs.eof()) {
       // fs.getline(linea,sizeof(linea));
     //}




    int letra;
    int trad;
    string men_final="";

    for(int i=0;i<men.size();i++){
        letra=int(men[i]);
        trad=modulo(letra*clave,256);
        men_final+=trad;
    }
    ofstream ff(nameArchivo2.c_str(), ios::out);
    ff << men_final << endl;
    ff.close();

    //return men_final;
}


