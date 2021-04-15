#include<stdio.h>
#include<stdlib.h>
int main()
{
	int idade1,idade2,idade3;
	char nome1[40],nome2[40],nome3[40];
	printf("Coloque seu nome:");
	scanf("%s",&nome1[10]);
	printf("Coloque sua idade:");
	scanf("%d",&idade1);
	if(idade1>=18){
		printf("Maior de Idade");
	}
	else{
		printf("Menor de Idade");
	}
		printf("\nColoque seu nome:");
	scanf("%s",&nome2[10]);
	printf("Coloque sua idade:");
	scanf("%d",&idade2);
	if(idade2>=18){
		printf("Maior de Idade");
	}
	else{
		printf("Menor de Idade");
	}
		printf("\nColoque seu nome:");
	scanf("%s",&nome3[10]);
	printf("Coloque sua idade:");
	scanf("%d",&idade3);
	if(idade3>=18){
		printf("Maior de Idade");
	}
	else{
		printf("Menor de Idade");
	}
	system("pause");
}

