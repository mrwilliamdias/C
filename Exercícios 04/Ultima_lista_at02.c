#include<stdio.h>
#include<stdlib.h>

main(){
	char nome[30];
	float horas,salario;
	int nivel;
	
	printf("Digite o nome do professor: ");
	scanf("%s",&nome);
	printf("Digite as horas trabalhadas: ");
	scanf("%f",&horas);
	printf("Digite o Nivel do Professor:\n1-Nivel 1\n2-Nivel 2\n3-Nivel 3\n");
	scanf("%d",&nivel);
	system("cls");
	switch(nivel){
		case 1:
			salario=horas*12;
			printf("\nO Professor %s ira receber de salario: %.2f reais\n",nome,salario);
			break;
		case 2:
			salario=horas*17;
			printf("\nO Professor %s ira receber de salario: %.2f reais\n",nome,salario);
			break;
		case 3:
			salario=horas*25;
			printf("\nO Professor %s ira receber de salario: %.2f reais\n",nome,salario);
			break;
		default:
			printf("Codigo invalido");
	}
	system("pause");
	return(0);
}
