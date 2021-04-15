#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("Informe o numero:");
	scanf("%d",&num);
	if(num<0){
		printf("\nNumero Negativo\n");
	}
	if(num==0){
		printf("\nNumero Neutro\n");
	}
	else{
		printf("\nNumero Positivo\n");
	}
	system("pause");
	return(0);
}
