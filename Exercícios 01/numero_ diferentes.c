#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2;
	printf("Informe o primeiro numero:");
	scanf("%d",&n1);
	printf("Informe o segundo numero:");
	scanf("%d",&n2);
	if(n1==n2){
	printf("Os numeros sao iguais\n");
	}
	if(n1>n2){
	printf("Os numeros sao diferentes e o primeiro numero(%d) eh o maior\n",n1);
	}
	if(n2>n1){
		("Os numeros sao diferentes e o segundo numero (%d) eh o maior\n",n2);
	}
	system("pause");
	return(0);
}
