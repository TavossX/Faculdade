#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main (){


	setlocale(LC_ALL, "");
	
	float media, nota_um, nota_dois;
	
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota_um);
	
	printf("Digite a segunda nota:\n");
	scanf("%f", &nota_dois);

	media=(nota_um + nota_dois)/2;
	
	system("cls");
	
	if (media >= 8.5){
		printf("Sua nota é 'A' Parabéns!!");
	}	
	else if (media >= 7.5){
		printf("Sua nota é 'B' tá bom mas poderia ser melhor");
	}
	else if (media >= 6.0){
		printf("Sua nota é 'C' ta no podium, porém meio ruim");
	}
	else if (media >= 5.0){
		printf("Sua nota é 'D' horrível, pelo amor de Deus");
	}
	else if (media < 5.0){
		printf("Sua nota é 'E' tranque o curso agora, pelo bem da humanidade");
	}
	
	return 0;
}
