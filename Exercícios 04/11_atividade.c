#include <stdio.h>
#include <locale.h>

main(){
setlocale (LC_ALL, "Portuguese_Brazil");

char nome[30],sexo[10];
int  idade, grau_de_escolaridade;

printf("Informe o seu nome: ");
scanf("%s",&nome);
printf("Digite o sexo:");
scanf("%s",&sexo);
printf("Informe a sua idade: ");
scanf("%d",&idade);
printf("\n0-Analfabeto\n1-Ensino fundamental\n2-Ensino m�dio\n3-Gradua��o\n4-P�s-gradua��o\nDigite o n�mero que corresponde ao seu grau de escolaridade");
scanf("%d",&grau_de_escolaridade);
system("cls");
switch(grau_de_escolaridade)
{
	case 0:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nANALFABETO\n",nome,sexo,idade);
		break;
	case 1:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nENSINO FUNDAMENTAL\n",nome,sexo,idade);
		break;
	case 2:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nENSINO M�DIO\n",nome,sexo,idade);
		break;
	case 3:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nGRADUA��O\n",nome,sexo,idade);
		break;
	case 4:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nP�S GRADUA��O\n",nome,sexo,idade);
	default: 
		printf("C�DIGO INV�LIDO");
		}		

	
	}

