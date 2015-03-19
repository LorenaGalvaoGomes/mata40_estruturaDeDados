//6­ Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>
#include <stdlib.h>

float MediaBimestral(float a, float b,float c, float d);

void main() 
{
	float a,b,c,d soma_nota;
	printf("Digite a primeira nota: \n");
	scanf("%f",&a);
	printf("Digite a segunda nota: \n");
	scanf("%f",&b);
	printf("Digite a terceira nota:\n");
	scanf("%f",&c);
	printf("Digite a quarta nota:\n");
	scanf("%f",&d);
	soma_nota =MediaBimestral(a,b,c,d);	
	printf("A media bimestral eh %.2f",soma_nota);

}


float MediaBimestral(float a, float b,float c, float d)
{
	float calc_media;
	calc_media = (a + b + c + d)/4;
	return calc_media;
}
