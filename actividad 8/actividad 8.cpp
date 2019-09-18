#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;
void initialize(Pila *s){
	s->top = -1;
}

bool vacio(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, int *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

int main (){
    Pila unaPila;
	initialize(&unaPila);
    int x=0;
    int segunda[100];
    int aux[100];
    int cont=0;
    for(int i=0; i<99; i++){
        cout<<"digite el numero "<<i+1<<" de la pila"<<endl;
        cout<<"si desea salir presione 0"<<endl;
         cin>>aux[i],segunda[i];
        if(aux[i]==0){
            cout<<"has salido"<<endl;
            i=100;}
        else {
            cont+=1;

        }
    }
    for(int i=0; i<=cont; i++){
        push(&unaPila,aux[i]);
    }

        cout<<"el primer elemento de la pila es: "<<aux[0]<<endl;
        cout<<"dejando la pila vacia"<<endl;

        for(int i=0; i<=cont; i++){
         aux[i]=0;

        }
cout<<"mostrando pila llena"<<endl;
for(int i=0; i<=cont; i++){
    cout<<segunda[i];
}

}
