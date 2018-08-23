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
int sum_m(int a,int b,int base){
    a+=b;
    int r;
    if(a>=base ){
        r=a-base;
    }
    if(a<0){
        r=base+a;
    }
    return r;
}
int rest_m(int a,int b,int base){
    a-=b;
    int r;
    if(a>=base ){
        r=a-base;
    }
    if(a<0){
        r=base+a;
    }
    return r;
}
int mult_m(int a,int b,int base){
    a*=b;
    int r;
    if(a>=base ){
        r=a-base;
    }
    if(a<0){
        r=base+a;
    }
    return r;
}
int main()
{
    int a,b,c;
    char op;
    cout<<"ingresa el numero: ";cin>>a;
    cout<<a<<" mod"<<endl;
    cout<<"ingrese la base: ";cin>>c;
    cout<<a<<" mod "<<c<<endl;
    cout<<"ingrese la operacion: ";cin>>op;
    switch (op){
        case '+':
            cout<<"ingresa el numero: ";cin>>b;
            cout<<a<<" mod "<<c<<" + "<<b<<" mod "<<c<<endl;
            cout<<sum_m(a,b,c);
            break;
        case '-':
            cout<<"ingresa el numero: ";cin>>b;
            cout<<a<<" mod "<<c<<" - "<<b<<" mod "<<c<<endl;
            cout<<rest_m(a,b,c);
            break;
        case '*':
            cout<<"ingresa el numero: ";cin>>b;
            cout<<a<<" mod "<<c<<" * "<<b<<" mod "<<c<<endl;
            cout<<mult_m(a,b,c);
            break;
    }
    return 0;
}
