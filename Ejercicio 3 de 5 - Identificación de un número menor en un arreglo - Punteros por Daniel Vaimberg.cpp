/*Ejercicio 3: Creaci�n de un programa con base en punteros que sea capaz de determinar el n�mero menor en un array de tantos digitos desee el usuario*/
#include<stdio.h>
#include<conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "spanish");
	int arreglo, digitos[1000], *dir_digitos, a = 1000;
	
	printf("Digite el n�mero de componentes del arreglo: "); 
	scanf("%d",&arreglo);
	for(int i = 0; i<arreglo; i++){
		printf("Digite un n�mero [%d]: ", i + 1); 
		scanf("%d",&digitos[i]);
	}
	dir_digitos = digitos;
	for(int i; i<arreglo; i++){
		if(*dir_digitos<a){
			a=*dir_digitos;
		}
		dir_digitos++;
	}
	printf("\nEl menor n�mero con respecto a todo el arreglo es: %d", a);	
	getch();
	return 0;
}
