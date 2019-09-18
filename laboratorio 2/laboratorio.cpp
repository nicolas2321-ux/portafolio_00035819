#include <iostream>
using namespace std;

double mcd (int mayor, int menor, int aux){

   aux= mayor%menor;
    if(aux==0){
        cout<<"el MCD es: "<<menor<<endl;


    }
    else {
        mayor=menor;
        menor=aux;
        aux=0;
        return mcd(mayor,menor,aux);
    }

}

void jugada(int aguja, int torre1, int torre2, int torre3){

if (aguja==1){
    cout<<"mover disco de la torre "<<torre1<<" a la torre "<<torre3<<endl;
}
else{
    jugada(aguja-1,torre1,torre2,torre3);
    cout<<"mover disco de la torre "<<torre1<<" hacia la torre "<<torre3<<endl;
    jugada(aguja-1, torre2, torre1, torre3);
}
}

double cantidad (int numero_rec,int rec){
    while ( numero_rec>0){
        numero_rec= numero_rec/10;
        rec++;
    }
cout<<"su numero tiene "<<rec<<" digitos";


}



int main (){
int y=0;
int x=0;
cout<<"digite el numero mayor: "<<endl;
cin>>x;
cout<<"digite el numero menor: "<<endl;
cin>>y;

mcd(x,y,0);


cout<<"ejercicio 5-C"<<endl;
int aguja=0, torre1=1, torre2=2, torre3=3;
cout<<"con cuantos discos quiere jugar? ";
cin>>aguja;

jugada(aguja, torre1,torre2,torre3);


cout<<"ejercicio #8"<<endl;
int numero=0;
cout<<"digite el numero: ";
cin>>numero;
cantidad(numero,0);
}
