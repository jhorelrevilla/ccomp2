#include <iostream>

using namespace std;

int conv_200(float &x){
    int cont=0;
    while(x>=200){
        x-=200;
        cont++;
    }
    return cont;
}

int conv_100(float &x){
    int cont=0;
    while(x>=100){
        x-=100;
        cont++;
    }
    return cont;
}
int conv_50(float &x){
    int cont=0;
    while(x>=50){
        x-=50;
        cont++;
    }
    return cont;
}
int conv_20(float &x){
    int cont=0;
    while(x>=20){
        x-=20;
        cont++;
    }
    return cont;
}
int conv_10(float &x){
    int cont=0;
    while(x>=10){
        x-=10;
        cont++;
    }
    return cont;
}
int conv_5(float &x){
    int cont=0;
    while(x>=5){
        x-=5;
        cont++;
    }
    return cont;
}
int conv_2(float &x){
    int cont=0;
    while(x>=2){
        x-=2;
        cont++;
    }
    return cont;
}
int conv_1(float &x){
    int cont=0;
    while(x>=1){
        x-=1;
        cont++;
    }
    return cont;
}
int conv_5c(float &x){
    int cont=0;
    while(x>=0.50){
        x-=0.50;
        cont++;
    }
    return cont;
}
int conv_2c(float &x){
    int cont=0;
    while(x>=0.20){
        x-=0.20;
        cont++;
    }
    return cont;
}
int conv_1c(float &x){
    int cont=0;
    while(x>=0.10){
        x-=0.10;
        cont++;
    }
    return cont;
}
///////////////////////////////////////////////////////////



int main()
{
    float x;
    cout<<"ingresa el numero: ";cin>>x;
    cout<<"200: "<<conv_200(x)<<endl;
    cout<<"100: "<<conv_100(x)<<endl;
    cout<<"50: "<<conv_50(x)<<endl;
    cout<<"20: "<<conv_20(x)<<endl;
    cout<<"10: "<<conv_10(x)<<endl;
    cout<<"5: "<<conv_5(x)<<endl;
    cout<<"2: "<<conv_2(x)<<endl;
    cout<<"1: "<<conv_1(x)<<endl;
    cout<<"50c: "<<conv_5c(x)<<endl;
    cout<<"20c: "<<conv_2c(x)<<endl;
    cout<<"10c: "<<conv_1c(x)<<endl;
    ////////////////////////
    int num,u,d,c,m;
    u=num%10;
    numero/=10;
    d=num%10;
    numero/=10;
    c=num%10;
    numero/=10;
    m=num%10;
    numero/=10;

    switch(m){
        case 1:
            cout<<"M";break;
        case 2:
            cout<<"MM";break;
        case 3:
            cout<<"MM";break;
    }
    switch(c){
        case 1:
            cout<<"C";break;
        case 2:
            cout<<"CC";break;
        case 3:
            cout<<"CCC";break;
        case 4:
            cout<<CD";break;
        case 5:
            cout<<"D";break;
        case 6:
            cout<<"DC";break;
        case 7:
            cout<<"DCC";break;
        case 8:
            cout<<"DCCC";break;
        case 9:
            cout<<"CM";break;
    }
    switch(d){
        case 1:
            cout<<"X";break;
        case 2:
            cout<<"XX";break;
        case 3:
            cout<<"XXX";break;
        case 4:
            cout<<"XL";break;
        case 5:
            cout<<"L";break;
        case 6:
            cout<<"LX";break;
        case 7:
            cout<<"LXX";break;
        case 8:
            cout<<"LXXX";break;
        case 9:
            cout<<"XC";break;
    }
    switch(u){
        case 1:
            cout<<"I";break;
        case 2:
            cout<<"II";break;
        case 3:
            cout<<"III";break;
        case 4:
            cout<<"IV";break;
        case 5:
            cout<<"V";break;
        case 6:
            cout<<"VI";break;
        case 7:
            cout<<"VII";break;
        case 8:
            cout<<"VIII";break;
        case 9:
            cout<<"IX";break;
    }
    return 0;
}
