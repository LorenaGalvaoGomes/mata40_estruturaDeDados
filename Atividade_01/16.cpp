//16� Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a receber,
//sabendo�se que o funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre este sal�rio.

#include <stdio.h>
float salario(float a){
	float newsal = (a * 1.05)*0.93;
	return newsal;
}

int main(){
	float x;
	puts("Digite o salario base!");
	scanf("%f" , &x);
	printf("O seu salario e %.2f reais ", salario(x));
	
}

