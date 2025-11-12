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
 
 void dibujarJ(int x, int y, int n){
 	for (int i=0; i<n; i++){
 		for (int j=0; j<n; j++){
 			
 			if(j == n-1 || i == n-1 || (j == 0 && i >= n/2)){
 				gotoxy (x + j, y + i);
 				cout<<"*";
			 }
		 }
	 }
 }
 
 void dibujarA(int x, int y, int n){
 	for (int i=0; i<n; i++){
 		for (int j=0; j<n; j++){
 			
 			if(j == 0 || i == 0 || j == n-1 || (i == n/2 && j <= n-1)){
 				gotoxy (x + j, y + i);
 				cout<<"*";
			 }
		 }
	 }
 }
 
 void dibujarG(int x, int y, int n){
 	for (int i=0; i<n; i++){
 		for (int j=0; j<n; j++){
 			
 			if(j == 0 || i == 0 || i == n-1 || (j == n-1 && i >= n/2) || (i == n/2 && j >= n/2)){
 				gotoxy (x + j, y + i);
 				cout<<"*";
			 }
		 }
	 }
 }
 
 void dibujarB(int x, int y, int n){
 	for (int i=0; i<n; i++){
 		for (int j=0; j<n; j++){
 			
 			if(j == 0 || i == 0 || i == n-1 || j == n-1 || ( j <= n-1 && i == n/2)){
 				gotoxy (x + j, y + i);
 				cout<<"*";
			 }
		 }
	 }
 }
 
 int main(){  
	dibujarJ(7,5,9);
	dibujarA(20,5,9);
	dibujarG(33,5,9);
	dibujarB(46,5,9);
      return 0;  
 }  
