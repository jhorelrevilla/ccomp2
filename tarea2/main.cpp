#include <iostream>

using namespace std;
int modulo(int a, int b){
    int co=a/b;
    int re=a-co*b;
    if(re<0){
        re+=b;
    }
    return re;
}
int obt_q(int a,int numero){
    int q=1;
    while(a*(q+1)<numero){
        q++;
    }
    return q;
}
int nani(int a,int b,int numero){//15, ,26
    int q=obt_q(a,numero);
    b=numero-(a*q);
    cout<<numero<<"="<<q<<"*"<<a<<"+"<<b<<endl;

    //int num=a-(b*q);
    //num=modulo(num,numero);
    //cout<<"a"<<"-(b"<<"*q): "<<num<<endl;

    numero=a;
    a=b;
    if(b==1 || b<=0){
        return b;
    }
    return nani(a,b,numero);
}
bool ver_inver(int a, int b){

    int cond=99999;
    while(cond>1){
        cond=nani(a,cond,b);
    }
    if(cond==1){
        return true;
    }
    return false;
}

int obt_inver(int a,int b,int q,int base){
    //int num=a-(b*q);
    //num=modulo(num,base);
    if(a==0){
        return 0;
    }
    if(a==1){
        return 1;
    }
}


int inver(int a,int b){

}
int main()
{
    cout<<ver_inver(15,26);

    return 0;
}
