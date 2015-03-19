//8­ Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere pi = 3:141592.

#include <stdio.h>
float raio(float r){
	float area;
	float pi= 3.141592;
	area = r * r * pi;
	return area;
}

int main(){
	float r;
	puts("Digite o valor do raio");
	scanf("%f",&r);
	printf("Area do circulo = %f", raio(r));
	
}

