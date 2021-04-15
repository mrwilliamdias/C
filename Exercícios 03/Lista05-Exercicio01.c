#include<stdio.h>
#include<stdlib.h>
	
	main(){
	char nome[40];
	float n1,n2,n3,n4,m;
	while(1){
		printf("Informe o nome do Aluno:");
		scanf("%s",&nome);
		printf("Informe a nota 1: ");
		scanf("%f",&n1);
		printf("Informe a nota 2: ");
		scanf("%f",&n2);
		printf("Informe a nota 3: ");
		scanf("%f",&n3);
		printf("Informe a nota 4: ");
		scanf("%f",&n4);
	m=(n1+n2+n3+n4)/4;
	if(m>=7){
		printf("Aluno APROVADO\n");
	}
	else{
		printf("Aluno REPROVADO\n");
	}
	getch();
	system("CLS");

}
}
