#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL,"");
	int pagamento;
	float valor, desconto, novo_valor;
	
	printf("Bem-vindo ao SysPagFatec \n");
	printf("Qual valor a pagar? \n");
	scanf("%f", &valor);
	printf("Selecione a Forma de Pagamento \n");
	printf("1 - Dinheiro \n");
	printf("2 - PIX \n");
	printf("3 - Débito \n");
	printf("4 - Crédito \n");
	scanf("%d", &pagamento);
	
	switch(pagamento)
	{
		case 1:
			printf("Forma escolhida é Dinheiro \n");
       		desconto = (valor * 0.15);
       		break;

		case 2:
			printf("Forma escolhida é Pix \n");
       		desconto = (valor * 0.10);
       		break;
		case 3:
			printf("Forma escolhida é Débito \n");
       		desconto = (valor * 0.5);
       		break;

		case 4:
			printf("Forma escolhida é Crédito \n");
       		desconto = (valor * 0.0);
       		break;

		default:
			printf("Opção inválida \n");
       		break;
       		return 0;
	}
	
	novo_valor = valor - desconto;
	printf("O desconto foi de R$%.2f \n", desconto);
	printf("O valor total a ser pago será R$%.2f \n", novo_valor);
}
