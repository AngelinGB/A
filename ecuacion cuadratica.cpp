//realizar un programa que mjuestre en pantalla las raices de una ecuacion cuadratica cuyos coeficientes sean ingresados por teclado

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	
	float a;
	float b;
	float c;
	float potencia;
	float disc;
	float result1;
	float result2;
	
	cout<<"ingrese el valor de a = ";
	cin>>a;
	cout<<"ingrese el valor de b = ";
	cin>>b;
	cout<<"ingrese el valor de c = ";
	cin>>c;
	
	
	potencia = pow (b, 2);
	disc = potencia - (4 * a * c);
	
	if (a==0){
		
		cout<<"tu ta equivocao :)";	
		
	} else if (disc < 0){
		
		cout<<"tu ta quivocao :)";
		
	} else if (disc == 0){
		
		result1 = (b + (sqrt (disc))) / (2 * a);
		
		cout<<"el resultado es = "<< result1;
	}
	//lo hiciste bien,pero lohiciste por variables separadas,te recomendaria poner todo en una variable por ejemplo pow(b,2)-4*a*c) pero esta bien, en las condiciones olvidaste poner las raices ,el positivo y negativo ,en cada condicional, y el ultimo cout
	return 0;
}
