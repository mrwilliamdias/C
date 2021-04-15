#include<stdio.h>
#include<stdlib.h>

main(){
	int escolha,vol;
	vol=1;
	while(vol<11){
	printf("Estado civil:\n(1)Solteiro\n(2)Casado\n(3)Outros\n");
	scanf("%d",&escolha);
		switch(escolha){
			case 1:
				printf("Solteiro\n");
			break;
			case 2:
				printf("Casado\n");
			break;
			case 3:
				printf("Outros\n");
			break;
			default:
				printf("Opcao Invalida\n");
		}
	vol++;
	system("pause");
	system("cls");
	}
}

