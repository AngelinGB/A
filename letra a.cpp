#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;

 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 void dibujarE(int x, int y, int n){
 	for (int i=0; i<n; i++){
 		for (int j=0; j<n; j++){
 			
 			if(j == 0 || i == 0 || j == n-1 || (i == n/2 && j <= n-1)){
 				gotoxy (x + j, y + i);
 				cout<<"*";
			 }
		 }
	 }
 }
 
 int main(){  
	dibujarE(7,5,10);
      return 0;  
 }  
