#include <stdio.h>
#include <locale.h>

int main ()

{
	setlocale(LC_ALL, "");
	
	int idade;
	float parcela, seguro, renda;
	
	printf("Bem vindo ao banco do Brasil \n");
	printf("Qual sua idade? \n");
	scanf("%d", &idade);

	printf("Qual sua renda mensal? \n");
	scanf("%f", &renda);
	
	if (idade < 18 || renda <= 1500)
	{
		printf("Você não possui idade o suficiente para um empréstimo bancário \n");
		return 0;		
	} 
	
	
	
	if (renda>=1500){	
		parcela = renda*0.15;
	}
	
	if (renda>=2000){
		parcela = renda*0.2;
	}
	if (renda>=2500){
		parcela = renda*0.3;
	}
	if (idade>=17 && idade<=31){
		seguro = parcela*0.05;
	}
	if (idade>=30 && idade<=46){
		seguro = parcela*0.07;
	}
	if (idade>=45 && idade<=61){
		seguro = parcela*0.1;
	}
	if (idade>60){
		seguro = parcela*0.15;
	}
	
	
	
	printf("De acordo com sua renda, o valor de sua parcela será de R$ %.2f \n e seu seguro será de R$ %.2f",parcela, seguro);
	
	return 0;
}
