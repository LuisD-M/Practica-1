#include <iostream>
using namespace std;

int problema2(int plata);
void problema3();
void problema4();
void problema5();
void problema6();


int main(){

    int opcion=1;


    while(opcion != 0){
        cout<<"************* Menu Practica #1 **************"<<endl;
        cout <<"Ingrese el numero del problema que desea de los 17 problemas que se tiene. "<<endl;
        cout<<"Ingrese cero para salir."<<endl;
        cin>> opcion;
        cout<<endl;

        int plata=0;

        switch(opcion){
        case 0:
            cout<<endl;
            break;

        case 1:
            cout<<"Problema #1."<<endl;

            cout<<endl;
            break;

        case 2:
            cout<<"Problema #2."<<endl;
            cout<<"Ingrese el valor de la plata: "; cin>>plata;
            problema2(plata);
            cout<<endl;
            break;

        case 3:
            cout<<"Problema #3."<<endl;
            problema3();
            cout<<endl;
            break;

        case 4:
            cout<<"Problema #4."<<endl;
            problema4();
            cout<<endl;
            break;

        case 5:
            cout<<"Problema #5."<<endl;
            problema5();
            cout<<endl;
            break;

        case 6:
            cout<<"Problema #6."<<endl;
            problema6();
            cout<<endl;
            break;

        case 7:
            cout<<"Problema #7."<<endl;

            cout<<endl;
            break;

        case 8:
            cout<<"Problema #8."<<endl;

            cout<<endl;
            break;

        case 9:
            cout<<"Problema #9."<<endl;

            cout<<endl;
            break;

        case 10:
            cout<<"Problema #10."<<endl;

            cout<<endl;
            break;

        case 11:
            cout<<"Problema #11."<<endl;

            cout<<endl;
            break;

        case 12:
            cout<<"Problema #12."<<endl;

            cout<<endl;
            break;

        case 13:
            cout<<"Problema #13."<<endl;

            cout<<endl;
            break;

        case 14:
            cout<<"Problema #14."<<endl;

            cout<<endl;
            break;

        case 15:
            cout<<"Problema #15."<<endl;

            cout<<endl;
            break;

        case 16:
            cout<<"Problema #16."<<endl;

            cout<<endl;
            break;

        case 17:
            cout<<"Problema #17."<<endl;

            cout<<endl;
            break;

        default:
            cout<<"Se ingreso un valor invalido."<<endl;

            cout<<endl;
            break;

        }   // LLave del switch case.
    } //Llave del while grande.
    cout<<"El programa a finalizado."<<endl;
    return 0;   }


int problema2(int plata){
    if(plata>50000){
        cout<<"50000: "<<plata/50000<<endl;
        plata = plata - (plata/50000)*50000;
    } else cout<<"50000: 0"<<endl;

    if(plata>20000){
        cout<<"20000: "<<plata/20000<<endl;
        plata = plata - (plata/20000)*20000;
    } else cout<<"20000: 0"<<endl;

    if(plata>10000){
        cout<<"10000: "<<plata/10000<<endl;
        plata = plata - (plata/10000)*10000;
    } else cout<<"10000: 0"<<endl;

    if(plata>5000){
        cout<<"5000: "<<plata/5000<<endl;
        plata = plata - (plata/5000)*5000;
    } else cout<<"5000: 0"<<endl;

    if(plata>2000){
        cout<<"2000: "<<plata/2000<<endl;
        plata = plata - (plata/2000)*2000;
    } else cout<<"2000: 0"<<endl;

    if(plata>1000){
        cout<<"1000: "<<plata/1000<<endl;
        plata = plata - (plata/1000)*1000;
    } else cout<<"1000: 0"<<endl;

    if(plata>500){
        cout<<"500: "<<plata/500<<endl;
        plata = plata - (plata/500)*500;
    } else cout<<"500: 0"<<endl;

    if(plata>200){
        cout<<"200: "<<plata/200<<endl;
        plata = plata - (plata/200)*200;
    } else cout<<"200: 0"<<endl;

    if(plata>100){
        cout<<"100: "<<plata/100<<endl;
        plata = plata - (plata/100)*100;
    } else cout<<"100: 0"<<endl;

    if(plata>50){
        cout<<"50: "<<plata/50<<endl;
        plata = plata - (plata/50)*50;
    }else cout<<"50: 0"<<endl;

    cout<<"Faltante: "<<plata<<endl;

    return 0; }

void problema3(){
    int mes, dia;
    cout<<"Ingrese el numero del mes: ";cin>>mes;

    cout<<"Ingrese el dia del mes: "; cin>>dia;

    if(mes>0 && mes<13){
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
            if(dia>0 && dia<32) cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
            else cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl; }

        else if(mes==4 || mes==6 || mes==9 || mes==11){
                if(dia>0 && dia<31) cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
                else cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl; }

        else{
                if(dia>0 && dia<29) cout<<dia<<"/"<<mes<<" es una fecha valida."<<endl;
                else if(dia==29) cout<<dia<<"/"<<mes<<" es una fecha valida en bisiesto."<<endl;
                else cout<<dia<<"/"<<mes<<" es una fecha invalida."<<endl;}
    }
    else cout<<mes<<" es un mes invalido."<<endl;
}

void problema4(){
    int n1, n2, sumin, suhora, auxmin;
    cout<<"Ingrese el primero numero: "; cin>>n1;
    cout<<"Ingrese el segundo numero: "; cin>>n2;

    if((n1/100)<24 && (n1%100)<60){
        if((n2/100)<24 && (n2%100)<60){
                if((n1%100 + n2%100)>59){
                    auxmin = 1;
                    sumin = n1%100 + n2%100 - 60;     }
                else{
                    auxmin = 0;
                    sumin = n1%100 + n2%100; }

                suhora = auxmin + n1/100 + n2/100;

                if(suhora > 23){
                    suhora -= 24;
                    cout<<"La hora es: "<<suhora<<":"<<sumin<<" del siguiente dia"<<endl;  }
                else cout<<"La hora es: "<<suhora<<":"<<sumin<<endl;
        }
        else cout<<n2<<" es un tiempo invalido"<<endl;
    }else cout<<n1<<" es un tiempo invalido"<<endl;
}

void problema5(){
    int N;
    cout<<"Ingrese un numero impar N: "; cin>>N;
    if(N%2 != 0){
        for(int i=1; i<=N/2 +1; i++){                   // ciclo de las primeras lineas lineas numero par
            for(int j=0; j<=(N/2)-i; j++) cout<<" ";
            for(int j=1; j<=(2*i-1); j++) cout<<"*";
            for(int j=0; j<=(N/2)-i; j++) cout<<" ";
            cout<<endl; }

        for(int i=1; i<=N/2; i++){                     //Ciclo para las ultimas lineas las que faltan
            for(int j=0; j<i; j++) cout<<" ";
            for(int j=0; j<(N-2*i); j++) cout<<"*";
            for(int j=0; j<i; j++) cout<<" ";
            cout<<endl;
        }
    }
    else cout<<"Numero ingresado invalido."<<endl;
}

void problema6(){
    int n, factorial=1;
    float suma=0;
    cout<<"Ingrese el numero de elementos de la serie: "; cin>>n;

    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++) factorial *=j;
        suma += 1.0/(float)factorial;
        cout<<factorial<<endl;
        factorial = 1;
    }
    cout<<"la suma es: "<<suma<<endl;

}

