//14� Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, sabendo�se que este
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
