#include <iostream>
using namespace std;

struct complejos{
        int numero;
        int complejo;
    };
    
int conteo (int num){
    if (num==1){
        for(int i=1; i<=3; i++){
            cout<<i<<endl;
        }
    }
    else{
        int x=num;
        cout<<x<<endl;
        return conteo(num-1);
    }




}
    
    int main (){
       
       //ejercicio #8
       int nummain;
       cout<<"digite el numero: "<<endl;
       cin>>nummain;
    int r=conteo(nummain);

       
       //ejercicio #16 
       cout<<"ejercicio #16, sumar 10 numeros y mostrar la suma y promedio de estos "<<endl;
        int numeros [10];
        int contador;
        for (int i=0; i<10; i++){
            cout<<"digite su numero: "<<endl;
            cin>>numeros[i];
        }
    for (int i=0; i<10; i++){
        contador+=numeros[i];
    }
    cout<<"la suma es: "<<contador<<endl;
    cout<<"el promedio es: "<<contador/10<<endl;

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