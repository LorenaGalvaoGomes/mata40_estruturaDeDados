//17� Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o seu sal�rio a receber,
//sabendo�se que o funcion�rio tem gratifica��o de R$ 50 e paga imposto de 10% sobre o sal�rio base.

#include <stdio.h> 
#include <math.h> 
#include <stdlib.h>

float CalculaSalario(float salario);

int main()
{
	float sal,vlrSalario;
	printf("Informe o valor do seu salario:\n ");
	scanf("%f", &sal);
	vlrSalario  = CalculaSalario(sal);
	printf("O valor do seu novo salario eh %.2f", vlrSalario);	
}
float CalculaSalario(float salario)
{
   	float valorNovoSalario, gratificacao, imposto;
   	gratificacao = 50.00;
   	imposto = salario*0.10;   	
	valorNovoSalario = salario + gratificacao - imposto;
	return valorNovoSalario;
}
