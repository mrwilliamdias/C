#include <stdio.h>
main(){
	int num,x;
	x=0;
	
		printf("Escolha o numero:");
		scanf("%d",&num);
		
	while(x<10){
		x++;
		printf("%d X %d = %d\n",num, x,num*x);
}
}
