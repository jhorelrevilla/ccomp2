#include <iostream>

using namespace std;
bool bisiesto(int x){
    if(x%4 == 0 && x%100!=0 || x%400==0){
        return true;
    }
    else
        return false;
}
int dia_m(int anio, int mes){
    int dia,cent,centuri;
    if(mes<=2){
        mes=mes+10;
        anio--;
    }
    else{
        mes-=2;
    }
    cent=anio%100;
    centuri=anio/100;
    dia=((700+((26*mes-2)/10)+1+cent+(cent/4)+((centuri/4)+5*centuri))%7);
    return dia;
}
//////////////////////////////////////////////////////////////////
void dib_mesE(int x,bool a){
    if(a==true){
        int dias=30+x;
        cout<<"D\tL\tM\tM\tJ\tV\tS"<<endl;
        int tab=0;
        for(int j=1;j<=dias;j++){
            tab++;
            if(dias==30){
                cout<<j<<"\t";
                if(tab==7){
                    cout<<endl;
                    tab=0;
                }
            }
            if(dias>30){
                cout<<"\t";
                dias--;
                j--;
            }
        }
        return;
    }
    int dias=31+x;
    cout<<"D\tL\tM\tM\tJ\tV\tS"<<endl;
    int tab=0;
    for(int j=1;j<=dias;j++){
        tab++;
        if(dias==31){
            cout<<j<<"\t";
            if(tab==7){
                cout<<endl;
                tab=0;
            }
        }
        if(dias>31){
            cout<<"\t";
            dias--;
            j--;
        }
    }
}
void dib_mesF(int x,bool a){
    if(a==true){
        int dias=29+x;
        cout<<"D\tL\tM\tM\tJ\tV\tS"<<endl;
        int tab=0;
        for(int j=1;j<=dias;j++){
            tab++;
            if(dias==29){
                cout<<j<<"\t";
                if(tab==7){
                    cout<<endl;
                    tab=0;
                }
            }
            if(dias>29){
                cout<<"\t";
                dias--;
                j--;
            }
        }
        return;
    }
    int dias=28+x;
    cout<<"D\tL\tM\tM\tJ\tV\tS"<<endl;
    int tab=0;
    for(int j=1;j<=dias;j++){
        tab++;
        if(dias==28){
            cout<<j<<"\t";
            if(tab==7){
                cout<<endl;
                tab=0;
            }
        }
        if(dias>28){
            cout<<"\t";
            dias--;
            j--;
        }
    }
}
void graf_m(int mes,int anio){
    int x=dia_m(anio,mes);
    switch(mes){
    case 1:
        dib_mesE(x,false);
        break;
    case 2:
        if(bisiesto(anio)){
            dib_mesF(x,true);
            break;
        }
        dib_mesF(x,false);
        break;
    case 3:
        dib_mesE(x,false);
        break;
    case 4:
        dib_mesE(x,true);
        break;
    case 5:
        dib_mesE(x,false);
        break;
    case 6:
        dib_mesE(x,true);
        break;
    case 7:
        dib_mesE(x,false);
        break;
    case 8:
        dib_mesE(x,false);
        break;
    case 9:
        dib_mesE(x,true);
        break;
    case 10:
        dib_mesE(x,false);
        break;
    case 11:
        dib_mesE(x,true);
        break;
    case 12:
        dib_mesE(x,false);
        break;
    }

}
int main()
{
    bool a=false;
    int mes;
    int anio;
    cout<<"ingresa anio: ";cin>>anio;
    cout<<"enero->1"<<endl;
    cout<<"febrero->2"<<endl;
    cout<<"marzo->3"<<endl;
    cout<<"abril->4"<<endl;
    cout<<"mayo->5"<<endl;
    cout<<"junio->6"<<endl;
    cout<<"julio->7"<<endl;
    cout<<"agosto->8"<<endl;
    cout<<"setiembre->9"<<endl;
    cout<<"octubre->10"<<endl;
    cout<<"noviembre->11"<<endl;
    cout<<"diciembre->12"<<endl;
    cout<<"ingresa mes: ";cin>>mes;
    cout<<endl;
    graf_m(mes,anio);
    return 0;
}
