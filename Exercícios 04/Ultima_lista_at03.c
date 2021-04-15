#include<stdio.h>
#include<stdlib.h>

main()
	{
	char escolha;
	
	printf("Digite o Codigo do produto(A,B,C ou outras letras): ");
	scanf("%c",&escolha);
	system("cls");
	switch(escolha){
		case 'a':
			printf("\nParafuso\n");
			break;
		case 'b':
			printf("\nOPorca\n");
			break;
		case 'c':
			printf("\nPrego\n");
			break;
		default:
			printf("\nDiversos\n");
	}
	system("pause");
	return(0);
}
