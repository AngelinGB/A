//escriba un programa que permita al usuario escribir 10 numeros, dichos numeros deben estar guardados 
//en un arreglo usando un bucle for, ubique el valor mas alto y el mas pequeño y muestre en pantalla
#include <iostream>
using namespace std;

int main (){
	
	int num[10];
	int men;
	int may;
	
	for (int i=0; i<10; i++){
		cout<<"ingrese el numeros = ";
		cin>>num[i];
	}
	
	men = 99999;
	may = 0;
	
	for (int j=0; j<10; j++){
		if (num[j]<men){
		men = num[j];
		
		} else if (num[j]>may){
			may = num[j];
		}
	}
	cout<<"el numero menor es = "<<men<<" y el numero mayor es = "<<may;
}
