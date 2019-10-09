#include <iostream>
#include <vector>
using namespace std;

struct Torden{
    int pupusas;
    string tipo;
};
typedef struct Torden orden;

orden solicitar_orden(){
    orden p;
    cout << "tipo de pupusa: "; cin >> p.tipo;
    cout << "cantidad de pupusas: ";   cin >> p.pupusas;
    return p;
}

void mostrarorde(orden p){
    cout << "tipo de pupusas: " << p.tipo << endl;
    cout << "cantidad de pupusas: " << p.pupusas << endl;
    cout << endl;
}

vector<orden> lista;

void agregarorden(){
    orden p = solicitar_orden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarorde(lista[i]);
}

int main(){
    cout << "Inicializando..." << endl;

    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar orden\n\t2) Ver ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarorden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
