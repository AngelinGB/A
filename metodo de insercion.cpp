//realice un programa wue permita al usuario ingresar una lista de 20 temperaturas y que de la opcion de mostrarlas ordenadas de menor a 
//mayor y viceversa, la ordenacion debe realizarce con insercion

#include <iostream>
using namespace std;

int main(){
int pos = 0;
int aux = 0;
int i, j = 0;
int num[20];

for(int i=0; i<20; i++){
		cout<<"ingrese la temperatura "<<(i+1)<<" = ";
		cin>>num[i];}
		
		for(i=0; i<20; i++){
			pos = i;
			aux = num[i];
			while((pos>0) && (num [pos-1]>aux)){
				num[pos] = num[pos-1];
				pos--;}
				num[pos]=aux;}
				
				cout<<"los numeros de menor a mayor son los siguientes = ";
	for (int i=0; i<20; i++){
		cout<<num[i]<<" ";}
		
		cout<<endl;
		cout<<"los numeros de mayor a menor son los siguientes = ";
				for (int i=19; i>=0; i--){
		cout<<num[i]<<" ";
	}
		return 0;
}
