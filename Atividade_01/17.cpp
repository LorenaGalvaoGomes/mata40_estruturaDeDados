//17­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
//sabendo­se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

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
