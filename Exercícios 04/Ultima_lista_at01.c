#include<stdio.h>
#include<stdlib.h>

main(){
	
	float area,preco;
	int escolha;
	
	printf("Digite a area a ser pulverizada: ");
	scanf("%f",&area);
	printf("Digite:\n1-Erva Daninhas\n2-Gafanhotos\n3-Broca\n4-Outros\n");
	scanf("%d",&escolha);
	system("cls");
	switch(escolha){
		case 1:
			preco=area*10;
			printf("\nO valor sera de: %.2f reais\n",preco);
			break;
		case 2:
			preco=area*20;
			printf("\nO valor sera de: %.2f reais\n",preco);
			break;
		case 3:
			preco=area*30;
			printf("\nO valor sera de: %.2f reais\n",preco);
			break;
		case 4:
			preco=area*25;
			printf("\nO valor sera de: %.2f reais\n",preco);
			break;
		default:
			printf("Codigo invalido");
	}
	system("pause");
	return(0);
}
