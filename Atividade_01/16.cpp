//16­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
//sabendo­se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário.

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

