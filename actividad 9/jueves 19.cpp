#include <iostream>
#include <stack>
using namespace std;

int main (){

stack<int>s;
int a,b,c,d,e;
cout<<"digite el primer numero de su pila: ";
cin>>a;
s.push(a);
cout<<"digite el segundo numero de su pila: ";
cin>>b;
s.push(b);
cout<<"digite el tercer numero de su pila: ";
cin>>c;
s.push(c);

cout<<"el primer numero de su pila es: "<<s.top()<<endl;;
cout<<"sacando todos los numeros"<<endl;
s.pop();
s.pop();
cout<<"el numero que estaba al fondo de la pila es: "<<s.top()<<endl;
s.pop();
cout<<"dejando la pila intacta"<<endl;
s.push(a);
s.push(b);
s.push (c);
cout<<"su nuevo top es: "<<s.top()<<endl;

return 0;
}
