//13� Fa�a um programa que receba tr�s notas e seus respectivos pesos, calcule e mostre a m�dia ponderada.

#include <stdio.h>
float media(float x, float y, float z){
	float p[]={3,3,4};
	float med = (x *p[0] + y *p[1] + z * p[2]) / 10;
	return med;
}

int main(){
	float a, b, c;
	puts("Digite as tr�s notas:");
	scanf("%f %f %f" , &a, &b, &c);
	printf("A media ponderada das tres notas e %f ", media(a,b,c));
	
}
