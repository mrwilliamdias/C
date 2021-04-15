#include<stdio.h>
#include<stdlib.h>
void main()
{
float sal,sal_f;
int vezes;
printf("Insira:\n(1)Caso o valor seja menos do que tres salarios minimos;\n(2)Caso o valor fique entre tres ate dez salarios minimos;\n(3)Caso o valor esteja acima de dez ate vinte salarios minimos;\n(4)Caso seja para os demais funcionarios;\n");
scanf("%d",&vezes);
printf("Coloque o valor do salario:");
scanf("%f",&sal);
switch(vezes)
{
case 1:
sal_f=sal*1.5;
	printf("O aumento sera de 50 porcento, o salario vai de %f para %f\n",sal,sal_f);
	break;
case 2:
	sal_f=sal*1.2;
	printf("O aumento sera de 20 porcento, o salario vai de %f para %f\n",sal,sal_f);
	break;
case 3:
	sal_f=sal*1.15;
	printf("O aumento sera de 15 porcento, o salario vai de %f para %f\n",sal,sal_f);
	break;
case 4:
	sal_f=sal*1.1;
	printf("O aumento sera de 10 porcento, o salario vai de %f para %f\n",sal,sal_f);
	break;
default:
printf("Numeros invalidos selecionados\n");	
}
system("pause");
}
