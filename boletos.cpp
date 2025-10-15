#include <iostream>
using namespace std;
int main(){
	
	float km; //kilometros recorridos
	float stay; //tiempo de estancia
	float precio; // precio total sin descuento
	float cdesc; //calculo del descuento
	float desc; //resta del descuento
	int opcion = 0;
	
	do {
	 cout<<"cuantos kilometros va a recorrer?"<<endl;
	 cin>>km;
	 
	 cout<<"cuantos dias va a quedarse?"<<endl;
	 cin>>stay;
	 
	 precio = km * 2;
	 
	 if (stay >= 7 && km >= 800){
	 	
	 	cdesc = precio * 0.30;
	 	desc = precio - cdesc;
	 	
	 	cout<<"el precio de su boleto es de = "<<precio<<" dolares y con el 30% de descuento es de = "<<desc<<"dolares :)"<<endl;
	 	
	 } else{
	 	
	 	cout<<"el precio de su boleto es de = "<<precio<<" dolares :)"<<endl;
	 }
	 cout<<"ingresa 1 si deseas continuar y 0 si deseas terminar"<<endl;
	 cin>>opcion;
	} while (opcion!=0);
	
	return 0;
}
