#include <iostream>
#include <conio.h>

using namespace std;

int main (){
    int numeros[]={1, 3, 4, 5, 17, 18, 31, 33};
    int sup,inf,mitad,numero;
    bool datofinal= false;

    cout<<"digite el numero a buscar: "<<endl;
    cin>>numero;
    if (numero<0){
        cout<<"error"<<endl;
    }
    inf =0;
    sup=5;
    while(inf<=sup){
        mitad = (inf+sup)/2;
        if (numeros[mitad]==numero){
            datofinal=true;
            break;
        }
        if (numeros[mitad] > numero){
            sup= mitad;
            mitad=(inf+sup)/2;
        }
        else if (numeros[mitad]<numero){
            inf = mitad;
            mitad= (inf+sup)/2;
        }

        }
    if (datofinal== true){
        cout<<"el numero se encontro en la posicion: "<<mitad<<endl;
    }
    else{
        cout<<"el numero no ha sido encontrado"<<endl;
    }

getch();
return 0;
}
