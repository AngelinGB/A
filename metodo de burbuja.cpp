//realice un programa que permita al usuario ingresar 10 notas y le muesre las opciones de ordenar de mayor a menos y viceversa

#include <iostream>
using namespace std;

int main(){
	
	int num[10];
	int aux = 0;
	
		for(int i=0; i<10; i++){
		cout<<"ingrese el numero "<<(i+1)<<" = ";
		cin>>num[i];}
		
		for (int i=0; i<10; i++){
			for (int j=0; j<10; j++){
				if(num[j]>num[j+1]){
					aux = num[j];
					num[j] = num[j+1];
					num[j+1] = aux;}
			}
		}
	cout<<"los numeros de menor a mayor son los siguientes = ";
	for (int i=0; i<10; i++){
		cout<<num[i]<<" ";
}
return 0;
	}
	
