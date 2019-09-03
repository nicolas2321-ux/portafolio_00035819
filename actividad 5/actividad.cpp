#include <iostream>
using namespace std;

int mult(int a,int b)
{
if(b ==1){

	return a;
}
else{
	return  a+mult(a, b-1);
}
}
int main(){
int a=0;
int b=0;
    cout<<"digite el primer numero: "<<endl;
    cin>>a;
    cout<<"digite el segundo numero: "<<endl;
    cin>>b;
	cout<<"Multiplicacion de "<<a<<"x"<<b<<": "<<endl;
	int resultado=mult(a,b);
	cout<<"resultado: "<<resultado<<endl;

}
