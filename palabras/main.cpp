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
bool find_l(char a){

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        return true;
    }
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
                cout<<"1"<<endl;
                resultado+=letra;
                resultado+=letra1;
                resultado=resultado+letra2+'-';
                p+=2;
                continue;
            }
            if(search_pala(letra,letra1)){
                cout<<"2"<<endl;
                resultado+=letra;
                resultado+=letra1;
                resultado+=letra2;
                if(*(p+3)!='\0'){
                    resultado+='-';
                }
                p+=2;
                continue;
            }
            cout<<"3"<<endl;
            resultado+=letra;
        }
        if(i>=0){
            cout<<"4"<<endl;
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
void imp_arr(char B[]){
    char* b=B;
    while(*b!=0){
        cout<<*b;
        b++;
    }
}

void sep_letra2(char A[],int tamanio){
    char C[tamanio];
    char *B=C;
    for(char *p=A;*p!='\0';p++){
        char letra=*p;
        char letra1=*(p+1);
        char letra2=*(p+2);
        bool i=find_l(letra);
        if(i==false){
            if(*p=='h' && find_l(*(p+3))){
                *B=letra;B++;
                *B=letra1;B++;
                *B='-';B++;
                p++;
                continue;
            }
            if(search_pala(letra,letra1)){
                *B=letra;B++;
                *B=letra1;B++;
                *B=letra2;B++;
                if(*(p+3)!='\0'){
                    *B='-';B++;
                }
                p+=2;
                continue;
            }
            *B=letra;
            B++;
        }
        if(i==true){
            if(*(p+1)=='\0'){
                *B=letra;
                B++;
            }
            else{
                *B=letra;
                B++;
                *B='-';
                B++;
            }
        }
    }
    *B='\0';
    imp_arr(C);
}



int main(){
    char A[]="hora";
    int tamanio=sizeof(A)/sizeof(A[0]);
    //sep_letra(A,tamanio);
    sep_letra2(A,tamanio);

    return 0;
}
