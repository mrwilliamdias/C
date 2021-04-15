#include<stdio.h>
#include<stdlib.h>
main(){
	int num,x,opcao;	
	do{
		printf("Informe um numero:");
		scanf("%d",&num);
		x=num%2;
		if(x==0){
		printf("PAR\n");
		}
		else{
		printf("IMPAR\n");
		}
		printf("Deseja continuar?\n(1)-Sim\n(2)-Nao\n");
		scanf("%d",&opcao);
		system("cls");	
	}while(opcao==1);

}

