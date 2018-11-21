#include <stdio.h>
#include <string.h>


mensagem()
{
	printf("\ndeseja continuar? 1-sim, 2-nao");
}
mensagens(float maior,int turmamaior,char nomemaior[110],char materiamaior[110]){

	printf("\naluno com maior media foi: ");
	puts(nomemaior);
	printf("\nna materia: ");
	puts(materiamaior);
	printf("\na com media de: %.2f", maior);
	printf("\nda turma: %i", turmamaior);
	
}
main(){
	typedef struct{
		char materia[100],nome[100];
		int turma;
		float n1,n2,n3,media;
	}info;
	info dados[100];
	int menu,n=0,i;
	float maior=0;
	char nomemaior[110],materiamaior[110];
	int turmamaior;
	do{
		fflush(stdin);
		printf("insira o seu nome: ");
		gets(dados[n].nome);
		printf("\ninsira a sua turma: 1,2,3 ano");
		scanf("%i", &dados[n].turma);
		fflush(stdin);
		printf("\ninsira a materia na qual suas notas pertecem: ");
		gets(dados[n].materia);
		printf("\ninsira a priemria nota: ");
		scanf("%f", &dados[n].n1);
		printf("\ninsira a segunda nota: ");
		scanf("%f", &dados[n].n2);
		printf("\ninsira a terceira nota: ");
		scanf("%f", &dados[n].n3);
		dados[n].media=(dados[n].n1+dados[n].n2+dados[n].n3)/3;
		printf("\nsua media e: %.2f", dados[n].media);
		mensagem();
		scanf("%i", &menu);
		n++;
	}while(menu==1);
	printf("\n----------------ALUNOS EM RECUPERACAOO----------------\n");
	for(i=0;i<n;i++){
		if(dados[i].media<7){
			puts(dados[i].nome);
		}
		if(dados[i].media>maior){
			maior=dados[i].media;
			strcpy(nomemaior,dados[i].nome);
			turmamaior=dados[i].turma;
			strcpy(materiamaior,dados[i].materia);
		}
	}
	mensagens(maior,turmamaior,nomemaior,materiamaior);
}
