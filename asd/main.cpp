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

int main()
{
    float x=1538.30;
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

    return 0;
}
