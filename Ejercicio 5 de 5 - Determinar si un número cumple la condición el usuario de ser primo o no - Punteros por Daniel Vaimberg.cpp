/*Ejercicio 5: Creaci�n de un programa con base en punteros que sea capaz de determinar si un numero ingresado por el usuario es primo o no y determinar la direcci�n del mismo*/
#include<stdio.h>
#include<conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "spanish");
	int n,*dirNumeros,veces=0;
	printf("Introduzca un n�mero para determinar si es primo o no lo es: "); 
	scanf("%d",&n);
	dirNumeros = &n;
	for(int i=1; i <= *dirNumeros; i++){
		if(*dirNumeros%i==0){
			veces++;
		}
	}
	if(veces>2){
		printf("El n�mero %d no es primo\n",*dirNumeros);
		printf("Su posicion en la memoria es: %d \n",dirNumeros);
	}else{
		printf("El n�mero: %d es primo\n",*dirNumeros);
		printf("Su posicion en la memoria es: %d\n",dirNumeros);
	}
	getch();
	return 0;
}
