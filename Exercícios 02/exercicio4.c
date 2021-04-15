#include<stdio.h>
#include<stdlib.h>

main(){
		int mul,num,r,opcao;
		mul=0;
		do{
		printf("Digite o Numero Desejavel: ");
		scanf("%d",&num);
			while(mul<11){
			printf("%d x %d = %d\n",num,mul,num*mul);
			mul++;
			}
		printf("Deseja Continuar\n(1)-SIM\n(2)-NAO\n");
		scanf("%d",&opcao);	
		system("cls");
		}while(opcao==1);

}
