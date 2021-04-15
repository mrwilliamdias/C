#include<stdio.h>
#include<stdlib.h>
	
main(){
	char nome[40];
	float n1,n2,n3,n4,m;
	int r,alunos;
	r=1;
	alunos=5;
		while(r<=alunos){
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
				printf("O aluno %s com a media %.2f esta APROVADO\n",nome,m);
			}
			else{
				printf("O aluno %s com a media %.2f esta REPROVADO\n",nome,m);
			}
	r++;
	getch();
	system("cls");
		}
}

