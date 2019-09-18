#include <iostream>
using namespace std;

struct complejos{
        int numero=0;
        int complejo=0;
    };

int conteo (int num, int acum){
    if (acum==num){
            cout<<acum<<endl;
        for(int i=acum-1; i>=1; i--){
          cout<<i<<endl;
        }
    }
    else{
        int x=acum;
        cout<<x<<endl;
        return conteo(num,acum+1);
    }
}


    int main (){

       //ejercicio #8
       int nummain=0;
       cout<<"ejercicio 8, tomar un numero y mostrarlo de acuerdo a lo estipulado en la guia"<<endl;
       cout<<"digite el numero: ";
       cin>>nummain;
    int r=conteo(nummain, 1);


       //ejercicio #16
       cout<<"ejercicio #16, sumar 10 numeros y mostrar la suma y promedio de estos "<<endl;
        int numeros [10];
        int contador=0;
        for (int i=0; i<10; i++){
            cout<<"digite su numero: "<<endl;
            cin>>numeros[i];
        }
    for (int i=0; i<10; i++){
        contador+=numeros[i];
    }
    cout<<"la suma es: "<<contador<<endl;
    cout<<"el promedio es: "<<contador/10<<endl;

    cout<<"ejercicio #22, crear una matriz de 5x5 y hacerla tri-diagonal,pidiendo solo los datos necesarios"<<endl;
    int matriz [5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+0)+0);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+0)+1);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+1)+0);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+1)+1);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+1)+2);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+2)+1);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+2)+2);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+2)+3);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+3)+2);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+3)+3);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+3)+4);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+4)+3);
    cout<<"digite el numero: "<<endl;
    cin>>*(*(matriz+4)+4);

    cout<<"fila #1"<<endl;
    for(int i=0; i<5; i++){
        cout<<*(*(matriz+0)+i)<<"-";
    }
    cout<<"fila #2"<<endl;
    for(int i=0; i<5; i++){
        cout<< *(*(matriz+1)+i)<<"-";
    }
    cout<<"fila #3"<<endl;
    for(int i=0; i<5; i++){
        cout<< *(*(matriz+2)+i)<<"-";
    }
    cout<<"fila #4"<<endl;
    for(int i=0; i<5; i++){
        cout<< *(*(matriz+3)+i)<<"-";
    }
     cout<<"fila #5"<<endl;
    for(int i=0; i<5; i++){
        cout<< *(*(matriz+4)+i)<<"-";
    }

    cout<<" "<<endl;


    //ejercicio #26
    cout<<"ejercicio #26, tomar un numero complejo y mostrar su conjugada"<<endl;

    complejos complex;
    cout<<"digite su parte real: "<<endl;
    cin>>complex.numero;
    cout<<"digite su parte compleja: "<<endl;
    cin>>complex.complejo;
    if(complex.complejo>=0){
    cout<<"su numero complejo es:"<<complex.numero<<"+"<<complex.complejo<<"j"<<endl;
    cout<<"su conjugada es: "<<complex.numero<<"-"<<complex.complejo<<"j"<<endl;
    }
    else{
        cout<<"su numero complejo es:"<<complex.numero<<complex.complejo<<"j"<<endl;
    cout<<"su conjugada es: "<<complex.numero<<"+"<<complex.complejo*-1<<"j"<<endl;
    }
    return 0;
}
