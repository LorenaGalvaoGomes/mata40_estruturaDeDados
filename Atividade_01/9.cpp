//9� Fa�a um Programa que leia o tamanho de um lado do quadrado e calcule sua �rea em seguida mostre o dobro
//desta �rea para o usu�rio.

#include <stdio.h>

int area(){
	int area;
	int dobro;
	int lado;
	scanf("%d",&lado);
	area=lado*lado;
	dobro=area*area;
	printf("%d\n%d\n",area,dobro);
	
}

main(){

	area();
		
}


