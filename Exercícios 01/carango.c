#include<stdio.h>
#include<stdlib.h>
void main()
{
float valor,valor_d,valor_f;
int tipo;
printf("Insira o valor do veiculo:");
scanf("%f",&valor);
printf("Selecine o tipo de combustivel: (1) para alcool, (2) para gasolina ou  (3) para diesel:");
scanf("%d",&tipo);
switch(tipo)
{
case 1:
 valor_d=valor*0.25;
 printf("O valor de desconto sera: %f\n",valor_d);
 valor_f=valor-valor_d;
 printf("O valor final sera: %f\n",valor_f);
    break;
case 2:
 valor_d=valor*0.21;
 printf("O valor de desconto sera: %f\n",valor_d);
 valor_f=valor-valor_d;
 printf("O valor final sera: %f\n",valor_f);
	break;
case 3:
 valor_d=valor*0.14;
 printf("O valor de desconto sera: %f\n",valor_d);
 valor_f=valor-valor_d;
 printf("O valor final sera: %f\n",valor_f);
	break;
default:
	printf("Valor invalido selecionado\n");
}
system("pause");
}
