#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
main(){
setlocale (LC_ALL, "Portuguese_Brazil");
char login[20], login1;
int senha, senha1, X, Y, OP, resto;
float R;

login1=login;
login1=login;

printf("Login:");
scanf("%s",login);
printf("Senha:");
scanf("%d",senha);

if(login==login1&&senha==senha1){
printf("1. Adição \n2. Subtração \n3. Multiplicação \n4. Divisão\nDigite a opção desejada: " );
scanf("%d",&OP);
printf("\nDigite o primeiro número: ");
scanf("%d",&X);
printf("Digite o segundo número: ");
scanf("%d",&Y);
if(OP==1){
R=X+Y;
printf("O resultado é %0.2f",R);
}
else if(OP==2){
R=X-Y;
printf("O resultado é %0.2f",R);
}
else if(OP==3){
R=X*Y;
printf("O resultado é %0.2f",R);	
}
else if(OP==4){
R=X/Y;
resto=X%Y;
printf("O resultado é %0.2f e o resto da divisão é %0.2d",R,resto);	
}
}
else{
	printf("Invalido");
}
}

