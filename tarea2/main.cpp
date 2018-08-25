#include <iostream>

using namespace std;

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
        cout<< cond;
    }
    if(cond==1){
        return true;
    }
    return false;
}
int inver(int a,int b){
    if(ver_inver(a,b)==true){

    }
}
int main()
{
    cout<<ver_inver(15,256);

    return 0;
}
