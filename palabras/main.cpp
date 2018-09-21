#include <iostream>
#include <string.h>
using namespace std;
bool search_pala(char a,char b){
    if((a=='b' || a=='c' || a=='d' || a=='g' || a=='f' || a=='k' || a=='t') && b=='r'){
        return true;
    }
    if((a=='b' || a=='c' || a=='g' || a=='f' || a=='k' || a=='p') && b=='l'){
            return true;
    }
    else
        return false;
}
void sep_letra(char A[],int tamanio){
    string vocales="aeiou";
    string resultado="";
    for(char *p=A;*p!='\0';p++){
        char letra=*p;
        char letra1=*(p+1);
        char letra2=*(p+2);
        int i=vocales.find(letra);
        if(i<0){
            if(*p=='h' && (vocales.find(*(p+3))>0)){
                resultado+=letra;
                resultado+=letra1;
                resultado=resultado+letra2+'-';
                p+=2;
                continue;
            }
            if(search_pala(letra,letra1)){
                resultado+=letra;
                resultado+=letra1;
                resultado+=letra2;
                if(*(p+3)!='\0'){
                    resultado+='-';
                }
                p+=2;
                continue;
            }
            resultado+=letra;
        }
        if(i>=0){
            if(*(p+1)=='\0'){
                resultado=resultado+letra;
            }
            else
                resultado=resultado+letra+'-';
        }
    }
    cout<<resultado;
    //char vocales="AEIOU";
    //si la primera letra es una vocal esta misma es solo 1 silaba
    //si empieza por consonante se va hasta la primera vocal
    //si termina en vocal se junta con la ultima consonante
    //si una consonante  se encuentra entre 2 vocales se separa la vocal y luego la consonante con la otra vocal
}

int main(){
    char A[]="hola";
    int tamanio=sizeof(A)/sizeof(A[0]);
    sep_letra(A,tamanio);
    return 0;
}
