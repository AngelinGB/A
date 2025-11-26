//realiza un programa que permita al usuario ingresar 15 numeros y cuente cuntas veces se repite un numero. 
//el usuario debe ingresar que numero quiere buscar
#include <iostream>
using namespace std;

int main(){
	
	int num[15];
	int search = 0;
	int cant = 0;
	
	for (int i=0; i<15; i++){
		cout<<"ingrese el numero "<<(i+1)<<" = ";
		cin>>num[i];
	}
	
	cout<<"que numero desea buscar?"<<endl;
	cin>>search;
	
	for (int j=0; j<15; j++){
		if (num[j]==search){
		cant++;
	}}
	
	cout<<"el numero se repite = "<<cant<<" veces";
	
	return 0;
}
