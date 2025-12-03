//realice un programa que permita ingresar al usuario los pesos de un grupo de 10 deportistas y le permita ordenarlos del mas pesado 
//al mas liviano, viceversa, calcular el promedio de pesos, ubicar al mas pesado, mas liviano y verificar si hay ´pesos repetidos. use 
//use funciones 

#include <iostream>
using namespace std;


int main(){
	
	int num[10];
	int aux, pos, i, j, may, prom, suma = 0;
	int men = 9999999999;
	
	
		for(int i=0; i<10; i++){
		cout<<"ingrese el peso "<<(i+1)<<" de los deportistas = ";
		cin>>num[i];}
		
		for(i=0; i<10; i++){
			pos = i;
			aux = num[i];
			while((pos>0) && (num [pos-1]>aux)){
				num[pos] = num[pos-1];
				pos--;}
				num[pos]=aux;}
				
				cout<<"los pesos de menor a mayor son los siguientes = ";
	for (int i=0; i<10; i++){
		cout<<num[i]<<" ";}
		
		cout<<endl;
		cout<<"los numeros de mayor a menor son los siguientes = ";
				for (int i=9; i>=0; i--){
		cout<<num[i]<<" ";
		
		
	}
}
