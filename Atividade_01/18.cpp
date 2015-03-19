//18 ­Faça um programa que calcule e mostre a área de um triângulo. Supondo que: Área = (base *altura) / 2.


#include <stdio.h>

int areaTriangulo(){
   float base,altura,area;
   scanf("%f %f",&base,&altura);
   altura=base*altura;
   printf("%f\n",altura);
	
}

main(){
	areaTriangulo();
	
}
