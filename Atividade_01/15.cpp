//15­ Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor
//do aumento e o novo salário.

#include <stdio.h>

int sal(){
	float sal,aum,porc;
	scanf("%f %f",&sal,&porc);
	aum=sal*porc;
	sal=sal+aum;
	printf("%f",sal);
	
	
}

main(){
	sal();
	
}
