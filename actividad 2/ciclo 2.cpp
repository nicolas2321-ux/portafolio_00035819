#include <iostream>
using namespace std;

int main (){
int cantidad=0;
double mediana [cantidad];
int numero=0;
int aux=0;
int nueva_cantidad=0;
cout<<"cantidad de numeros: "<<endl;
cin>>cantidad;
for (int i=0; i<cantidad; i++){
    cout<<"digite el numero: ";
    cin>>mediana[i];
}
 if (cantidad%2==0){
            nueva_cantidad= cantidad/2;
            aux=(cantidad/2)+1;
            cout<<"tu mediana es: "<<(mediana[nueva_cantidad-1]+mediana[aux-1])/2;

    }
    else {
        nueva_cantidad= (cantidad/2)+0.5;
        cout<<"tu mediana es: "<<mediana[nueva_cantidad];
    }
return 0;
}
