#include <stdio.h>

main(){
	int idade,i,r=0,r1=0,r2=0;
	float media;
	char op;
for(i=1;i<4;i++){
	fflush(stdin);
	printf("insira sua opniao sobre o filme: A-otimo, B-bom, C-regular\n");
	scanf("%c", &op);
	fflush(stdin);
	printf("insira a sua idade: \n");
	scanf("%d", &idade);
	fflush(stdin);
	switch(op){
		case 'A':
			r++;
			break;
	    case 'B':
	    	r1++;
	    	break;
	    case 'C':
	    	r2++;
	    	break;
	}
}if(18<=idade && op== 'C'){
	media=idade/r2;
}
printf("a quantidade de pessoas que achou otimo: %d\n", r);
printf("a porcentagem de pessoas que achou bom foi %d\n", (r1*100)/(i-1));
printf("a media de idade das pessoas que tem mais de 18 e que acharam o filme regular foi: %d\n", media);

}
