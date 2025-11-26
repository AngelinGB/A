//realice un programa que dado el siguiente arreglo permita al usuario cambiar el valor de una de las posiciones en especifico
//mostrar en pantalla en orden inverso, multiplicar el valor de dos posiciones que ingrese el usuario, cada operacion debe codificarse 
//en una funcion individual, esto incluye mostrar en pantalla en orden inverso, multiplicar y cambiar el valor de una posicion en especifico
#include <iostream>
using namespace std;

int main(){
	
	int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int cambio = 0;
	int valor = 0;
	int multi = 0;
	int x1 = 0;
	int x2 = 0;
	
	//mostrar valores de forma invertida
	cout<<"los numeros de manera invertida son los siguientes = ";
	for (int i=14; i>=0; i--){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	//cambiar valor
	cout<<"que valor desea cambiar (del 0 al 14)"<<endl;
	cin>>cambio;
	cout<<"que valor desea agregar ahi"<<endl;
	cin>>valor;
	
	num[cambio] = valor;
	
	cout<<"los numeros de manera invertida y actualizada son los siguientes = ";
	for (int i=14; i>=0; i--){
		cout<<num[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	
	//multiplicacion
	cout<<"que valor desea multilicar (del 0 al 14)"<<endl;
	cin>>x1;
	cout<<"que otro valor desea multiplicar (del 0 al 14)"<<endl;
	cin>>x2;
	
	multi = num[x1] * num[x2];
	
	cout<<"la multiplicacion entre "<<num[x1]<<" y "<<num[x2]<<" es de = "<<multi;
}
