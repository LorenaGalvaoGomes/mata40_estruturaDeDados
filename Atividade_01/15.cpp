//15� Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o valor
//do aumento e o novo sal�rio.

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
