#include<stdio.h>
#include<stdlib.h>

main(){
	int v1,v2,r,opcao;
	do{
		printf("Leia o Valor 1: ");
		scanf("%d",&v1);
		printf("Leia o Valor 2: ");
		scanf("%d",&v2);
		r=v1+v2;
		system("cls");
		printf("%d + %d = %d\n",v1,v2,r);
		printf("Deseja Continuar\n(1)-SIM\n(2)-NAO\n");
		scanf("%d",&opcao);
		system("cls");
	}while(opcao==1);
}
