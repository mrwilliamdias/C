#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	
	printf("Escreva o Numero:");
	scanf("%d",&num);
	
	printf("num: %d", num);
	
	if(num==40||num<25||num>80){
		printf("\nNumero Correto Selecionado\n");
	}else{
		printf("\nNumero Invalido\n");
	}
	system("pause");
}


