#include <stdio.h>
#include <math.h>
#include <iostream>

int main (){
	int a;
	
	setlocale(LC_ALL, "");
	
	printf("¿De que tamaño quieres el arbol?: ");
	scanf("%d", &a);
	
	if (a == 3){
		printf("	*\n");
		printf(" /|\ ");
		printf("\n");
		printf(" //|\\ \n");
		printf("*");
	}
	else if (a == 5){
	}
	else if (a == 7){
	}
	
	return 0;
}
