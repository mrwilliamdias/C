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
printf("\n0-Analfabeto\n1-Ensino fundamental\n2-Ensino médio\n3-Graduação\n4-Pós-graduação\nDigite o número que corresponde ao seu grau de escolaridade");
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
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nENSINO MÉDIO\n",nome,sexo,idade);
		break;
	case 3:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nGRADUAÇÃO\n",nome,sexo,idade);
		break;
	case 4:
		printf("\nNome:%s\nSexo:%s\nIdade:%d\nPÓS GRADUAÇÃO\n",nome,sexo,idade);
	default: 
		printf("CÓDIGO INVÁLIDO");
		}		

	
	}

