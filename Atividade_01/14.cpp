//14­ Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo­se que este
//sofreu um aumento de 25%.

#include <stdio.h>

int salario(){
	float salario,aum;
	scanf("%f",&salario);
	aum=salario*0.25;
	salario=salario+aum;
	printf("%f",salario);
	
	
}

main(){
	salario();
	
}
