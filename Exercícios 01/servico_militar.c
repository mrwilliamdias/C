#include<stdio.h>
#include<stdlib.h>
void main()
{
	char nome[40];
	int idade,saude,sexo;
	printf("Informe seu primeiro nome:");
	scanf("%s",&nome[40]);
	printf("Para informar seu sexo digite (1) Masculino e (2) para Feminino:");
	scanf("%d",&sexo);
	printf("Informe sua idade:");
	scanf("%d",&idade);
	printf("Digite (1) para saudavel e (2) para nao saudavel:\n");
	scanf("%d",&saude);
	if(sexo==1&&idade>=18&&saude==1){
		printf("Apto para o Servico Militar\n");
	}
	else{
		printf("Dispensado do Servico Militar\n");
	}
	system("pause");
}
